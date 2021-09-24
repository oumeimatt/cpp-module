/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:23:54 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/24 17:07:06 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    int found = 0;
    if (argc != 2)  
        return (1);
    Karen karen;
    std::string lev(argv[1]);
    std::string Levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        switch (lev.compare(Levels[i])){
            case  0 :
                found = 1;
                while (i < 4)
                    karen.complain(Levels[i++]);
        }
    }
    if (found != 1)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
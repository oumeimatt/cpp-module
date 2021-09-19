/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:07:08 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/19 12:07:10 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
 
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for(int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::cout << str << " ";
    }
    std::cout << std::endl;
}
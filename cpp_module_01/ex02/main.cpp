/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:49:27 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 10:01:06 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string String = "HI THIS IS BRAIN";
    std::string *stringPTR = &String;
    std::string &stringREF = String;

    std::cout << "Address in memory of the string " << &String << std::endl;
    std::cout << "Address in memory of the string using stringPTR " << stringPTR << std::endl;
    std::cout << "Address in memory of the string using stringREF "<< &stringREF << std::endl;
    
    std::cout << String << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
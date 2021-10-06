/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:14:04 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 17:41:02 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureaucrat test("oumixa", 2);
        std::cout << test<< std::endl;
        test.incrementGrade();
        std::cout << test<< std::endl;
        test.incrementGrade();
        std::cout << test << std::endl;
        std::cout << test.getGrade() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:14:04 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/08 16:49:10 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try 
    {
        Bureaucrat bur("BUREAUCRAT", 2);
        std::cout << bur << std::endl;
        bur.incrementGrade();
        std::cout << bur<< std::endl;
        bur.decrementGrade();
        std::cout << bur << std::endl;
        std::cout << bur.getGrade() << std::endl;
        bur.incrementGrade();
        std::cout << bur<< std::endl;
        bur.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
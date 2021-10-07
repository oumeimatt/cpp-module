/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:48:16 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/07 16:22:31 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(){
    try 
    {
        Bureaucrat bur("BUREAUCRAT", 5);
        Form fo("FORM", 6, 4);
        std::cout << bur << std::endl;
        std::cout << fo << std::endl;
        
        fo.beSigned(bur);
        bur.signForm(fo);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
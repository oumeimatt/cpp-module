/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:48:16 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/08 18:02:09 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    
    // ShrubberyCreationForm test
    try {
        Bureaucrat bur("BUREAUCRAT", 50);
        ShrubberyCreationForm shru("home");

        shru.beSigned(bur);
        bur.signForm(shru);
        // shru.execute(bur);
        bur.executeForm(shru);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }



    //RobotomyRequestForm  test 
    try {
        Bureaucrat bur2("BUREAUCRAT", 40);
        RobotomyRequestForm rob("test1");

        rob.beSigned(bur2);
        bur2.signForm(rob);
        // rob.execute(bur2);
        bur2.executeForm(rob);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    //PresidentialPardonForm test
    try {
        Bureaucrat bur3("BUREAUCRAT", 9);
        PresidentialPardonForm pres("TEST2");

        pres.beSigned(bur3);
        bur3.signForm(pres);
        // pres.execute(bur3);
        bur3.executeForm(pres);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:48:16 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/08 18:15:35 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){


    // test1 
    try {
    Intern someRandomIntern;
    Bureaucrat bur("BUREAUCRAT", 5);
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->beSigned(bur);
    bur.signForm(*rrf);
    delete rrf;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    // test2 
    try {
        
        Intern someRandomIntern2;
        Bureaucrat bur2("BUREAUCRAT", 149);
        Form* rrf2;
        rrf2 = someRandomIntern2.makeForm("shrubbery creation", "home");
        rrf2->beSigned(bur2);
        bur2.signForm(*rrf2);
        delete rrf2;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // test3
    try {
        
        Intern someRandomIntern3;
        Bureaucrat bur3("BUREAUCRAT", 2);
        Form* rrf3;
        rrf3 = someRandomIntern3.makeForm("presidential pardon", "target");
        rrf3->beSigned(bur3);
        bur3.signForm(*rrf3);
        delete rrf3;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
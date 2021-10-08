/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:48:16 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/08 16:09:47 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(){
    Intern someRandomIntern;
    Bureaucrat bur("BUREAUCRAT", 5);
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf->beSigned(bur);
    bur.signForm(*rrf);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:48:16 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/08 13:14:41 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    try {
        Bureaucrat bur("BUREAUCRAT", 149);
        ShrubberyCreationForm fl("home");
        
        // fl.beSigned(bur);
        // bur.signForm(fl);
        // fl.execute(bur);
        // bur.executeForm(fl);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
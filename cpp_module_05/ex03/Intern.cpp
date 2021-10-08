#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Intern::Intern(){}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

Form *  Intern::createShrubberyCreationForm(std::string target){
	Form *shrubbery = new ShrubberyCreationForm(target);
	return (shrubbery);
}

Form *  Intern::createRobotomyRequestForm(std::string target){
	Form *Robotomy = new RobotomyRequestForm(target);
	return (Robotomy);
}

Form *  Intern::createPresidentialPardonForm(std::string target){
	Form *PresidentialPardon = new PresidentialPardonForm(target);
	return (PresidentialPardon);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**/
typedef Form*(Intern::*fptr)(std::string);
Form * Intern::makeForm(std::string name, std::string target)
{
    fptr PTRF[3] = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++){
        if (!name.compare(forms[i]))
        {
            std::cout << "Intern creates " << forms[i] << std::endl;
            return ((this->*PTRF[i])(target));
        }
    }
    std::cout << "Inknown form!" << std::endl;
    return (nullptr);
}
/* ************************************************************************** */
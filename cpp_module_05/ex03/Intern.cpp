#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
typedef Form*(Intern::*fptr)(std::string);
Intern::Intern(){
}

// Intern::Intern( const Intern & src ){
// }


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

// Intern &				Intern::operator=( Intern const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

/**/
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
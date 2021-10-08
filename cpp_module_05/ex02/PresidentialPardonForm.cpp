#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form("PresidentialPardonForm", 25, 5)
{
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm(){}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _Grade(grade){
	if (this->_Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}
Bureaucrat:: Bureaucrat(){
	return ;
}

Bureaucrat:: Bureaucrat( const  Bureaucrat & src ){
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~ Bureaucrat(){
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				 Bureaucrat::operator=(  Bureaucrat const & rhs ){
	if ( this != &rhs )
	{
		this->_Name = rhs.getName();
		this->_Grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o,  Bureaucrat const & i ){
	o << i.getName() << ", bureaucrat grade " << i.getGrade() ;
	return o;
}

/**/


void Bureaucrat::incrementGrade( void ){
	if (this->_Grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_Grade--;
}


void Bureaucrat::decrementGrade( void ){
	if (this->_Grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_Grade++;
}

std::string Bureaucrat::getName() const {
	return (this->_Name);
}


int Bureaucrat::getGrade() const {
	return (this->_Grade);
}

void Bureaucrat::signForm( Form & form ){
	if (form.getSigned() == 1)
		std::cout << this->_Name << " signs " << form.getName() << std::endl;
	else
	{
		std::cout << this->_Name << " cannot sign " << form.getName() << " because ";
		std::cout << "Form's grade is too low." << std::endl;
	}
}
/* ************************************************************************** */
#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form( std::string name,  int gradetoS, int gradetoE) : _Name(name) , _gradeToSign(gradetoS), _gradeToExecute(gradetoE)
{
	if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	this->_isSigned = 0;
}

Form::Form( const Form & src ) : _Name(src._Name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form(){ return ; }


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_isSigned = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " required grade " << i.getGradeTosign() << " to sign it ,";
	o << " and grade " << i.getGradeToExecute() << " to execute it.";
	return o;
}

/*   */

std::string Form::getName( void ) const{
	return (this->_Name);
}

bool Form::getSigned( void ) const{
	return (this->_isSigned);
}

int Form::getGradeTosign( void ) const{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute( void ) const{
	return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = 1;
}
/* ************************************************************************** */
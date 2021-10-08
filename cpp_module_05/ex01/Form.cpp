#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() :_gradeToSign(0),_gradeToExecute(0) {}

Form::Form( std::string name,  int gradetoS, int gradetoE) : _Name(name) , _gradeToSign(gradetoS), _gradeToExecute(gradetoE)
{
	this->_isSigned = 0;
	if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
	{
		std::cout << this->_Name << " cannot be created because its ";
		throw Form::GradeTooLowException();
	}
	if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
	{
		std::cout << this->_Name << " cannot be created because its ";
		throw Form::GradeTooHighException();
	}
}

Form::Form( const Form & src ) : _Name(src._Name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form(){}


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
	o << "Form name : " << i.getName() << std::endl; 
	o << "grade required to sign it : " << i.getGradeTosign() << std::endl;
	o << "grade required to execute it : " << i.getGradeToExecute() << std::endl;
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
	{
		std::cout << this->_Name << " cannot be signed beacause its ";
		throw Form::GradeTooHighException();
	}
	this->_isSigned = 1;
}
/* ************************************************************************** */
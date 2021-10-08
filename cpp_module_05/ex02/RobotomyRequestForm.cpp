#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form("RobotomyRequestForm", 72, 45){
	*this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm(){}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ){
	this->_target = rhs._target;
	return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->getSigned() == 0)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	srand((unsigned) time(0));
	int i = rand() % 10;
	if (i % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->_target << " failed!" << std::endl;
}
/* ************************************************************************** */
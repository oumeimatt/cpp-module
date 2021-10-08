#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137){
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form("ShrubberyCreationForm", 145, 137){
	*this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm(){}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
		this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (this->getSigned() == 0)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream ofs(this->_target + "_shrubbery");
	ofs << "               ,@@@@@@@," << std::endl;
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o" << std::endl;
	ofs << "   ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'" << std::endl;
	ofs << "   %&&%&%&/%&&%@@/@@/ /@@@88888/88888'" << std::endl;
	ofs << "   %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'" << std::endl;
	ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	ofs << "       |o|        | |         | |" << std::endl;
	ofs << "       |.|        | |         | |" << std::endl;
	ofs << "    __/ ._\\//_/__/  ,\\_//____/.  \\_//__/_"<< std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
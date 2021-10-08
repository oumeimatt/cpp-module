#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Form * makeForm(std::string name, std::string target);
		Intern &		operator=( Intern const & rhs );
		Form * createShrubberyCreationForm(std::string target);
		Form * createRobotomyRequestForm (std::string target);
		Form * createPresidentialPardonForm(std::string target);

	private:

};


#endif /* ********************************************************** INTERN_H */
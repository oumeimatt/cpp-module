#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;
class  Bureaucrat
{

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(  Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=(  Bureaucrat const & rhs );
		void incrementGrade( void );
		void decrementGrade( void );
		std::string getName( void ) const;
		int getGrade( void )const;
		void signForm( Form & form );
		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException() {};
				virtual const char* what() const throw() {return "Bureaucrat's Grade Too High !";};
		};
		class GradeTooLowException : public std::exception
		{
			public : 
				GradeTooLowException() {};
				virtual const char* what() const throw() {return "Bureaucrat's Grade Too Low !";};
		};
	private:
		std::string _Name;
		int _Grade;

};

std::ostream &			operator<<( std::ostream & o,  Bureaucrat const & i );

#endif /* *****************************************************  BUREAUCRAT_H */
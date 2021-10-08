#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;


class Form
{

	public:

		Form();
		Form(std::string name, int gradetoS, int gradetoE);
		Form( Form const & src );
		virtual ~Form();
		Form &		operator=( Form const & rhs );

		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException() {};
				virtual const char* what() const throw() {return "Grade is Too High!";};
		};
		class GradeTooLowException : public std::exception
		{
			public : 
				GradeTooLowException() {};
				virtual const char* what() const throw() {return "Grade is Too Low!";};
		};
		class FormNotSignedException : public std::exception
		{
			public :
				FormNotSignedException(){};
				virtual const char* what() const throw() {return "Form is not signed!";};
		};

		void beSigned(Bureaucrat & bureaucrat);
		std::string getName( void ) const;
		bool getSigned( void ) const;
		int getGradeTosign( void ) const;
		int getGradeToExecute( void ) const;
		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string _Name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
		

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
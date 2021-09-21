#ifndef Phonebook_CLASS_HPP
#define Phonebook_CLASS_HPP

#include "Contact.Class.hpp"

class Phonebook
{
public:
	Phonebook();
	~Phonebook();

	void	add_command(void);
	void	search_command(void);

private:
	Contact	contact[8];
    int contact_numbers;


};

#endif
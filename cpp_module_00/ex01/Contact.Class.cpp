#include "Contact.Class.hpp"


Contact::Contact( void )
{
    std::cout << "Contact constructor called" << std::endl;
    return ;
}

Contact::~Contact( void )
{
    std::cout << "Cantact destructor called" << std::endl;
    return ; 
}


void Contact::add_infos(void)
{
	int index = 0;
	std::string contact_infos[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	std::cout << "Please enter contact's informations :" << std::endl;
	while (index < 11)
	{
		std::cout << " " << contact_infos[index] << " : ";
		std::getline(std::cin, Contact::infos[index]);
		index++;
	}
}

void Contact::display_infos(int index)
{
	std::cout << "| " << "         " << index << " | " << Contact::infos[0] << " | " << Contact::infos[1] << " | "
			  << Contact::infos[2] << " |" << std::endl;
}

void Contact::display_contact(void)
{
	std::string contact_infos[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	for (int index = 0; index < 5; index++)
	{
		std::cout << contact_infos[index] << " : " << Contact::infos[index] << std::endl;
	}
}
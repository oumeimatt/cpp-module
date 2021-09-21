#include "Phonebook.Class.hpp"


Phonebook::Phonebook( void )
{
    std::cout << "Phonebook constructor called" << std::endl;
    return ;
}

Phonebook::~Phonebook( void )
{
    std::cout << "Phonebook destructor called" << std::endl;
    return ; 
}


void Phonebook::add_command(void)
{
    this->contact[this->contact_numbers].add_infos();
    this->contact_numbers++;
}

void Phonebook::search_command(void)
{
    int contact_index = 0;

    std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0 ; i < this->contact_numbers; i++)
        this->contact[i].display_infos(i);
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Please enter contact's index : ";
    std::cin >> contact_index;
    this->contact[contact_index].display_contact();
}
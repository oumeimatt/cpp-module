/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:13:37 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 11:31:37 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"

Phonebook::Phonebook( void ) {
    this->contact_numbers = 0;
    return ;
}

Phonebook::~Phonebook( void ) {
    return ; 
}

void Phonebook::add_command(void)
{
    if (this->contact_numbers < 8)
    {
        this->contact[this->contact_numbers].add_infos();
        this->contact_numbers++;
    }
    else
        std::cout << "contact is full" << std::endl;
}

void Phonebook::search_command(void)
{
    std::string contact_index;
    int     index_exist = 0;

    std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0 ; i < this->contact_numbers; i++)
        this->contact[i].display_infos(i);
    std::cout << "---------------------------------------------" << std::endl;
    while (index_exist != 1)
    {
        std::cout << "Please enter contact's index : ";
        std::getline(std::cin , contact_index);
        try {
            if (std::stoi(contact_index) <  this->contact_numbers && std::stoi(contact_index) >= 0)
            {
                this->contact[std::stoi(contact_index)].display_contact();
                index_exist = 1;
            }
            else
                throw(1);
        }
        catch(...) {
            std::cout << "contact not found" << std::endl;
        }
    }
}
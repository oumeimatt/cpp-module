/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:14:08 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/26 11:59:40 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.Class.hpp"

Contact::Contact( void ) {
    return ;
}

Contact::~Contact( void ) {
    return ; 
}

void Contact::add_infos(void)
{
	int index = 0;
	std::string contact_infos[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	std::cout << "Please enter contact's informations :" << std::endl;
	while (index < 5)
	{
		std::cout << " " << contact_infos[index] << " : ";
		std::getline(std::cin, Contact::infos[index]);
		index++;
	}
}

std::string Contact::reformat_info(std::string info)
{
	std::string result;
	if (info.size() > 10)
	{
		result = info.substr(0, 9);
		result += ".";
		return (result);
	}
	else
		return (info);
}

void Contact::display_infos(int index)
{
	std::cout << "|" << "         " << index << "|";
	std::cout << std::setw(10) << reformat_info(infos[0]) << "|";
	std::cout << std::setw(10)  << reformat_info(infos[1]) << "|";
	std::cout << std::setw(10) << reformat_info(infos[2]) << "|" << std::endl;
}

void Contact::display_contact(void)
{
	std::string contact_infos[5] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
	for (int index = 0; index < 5; index++)
	{
		std::cout << contact_infos[index] << " : " << Contact::infos[index] << std::endl;
	}
}
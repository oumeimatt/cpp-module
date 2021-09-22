/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:13:44 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 11:13:51 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
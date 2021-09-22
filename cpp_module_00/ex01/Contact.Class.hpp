/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:13:59 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 11:14:00 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
public:

    Contact();
    ~Contact();

	void add_infos(void);
	void display_infos(int index);
    std::string reformat_info(std::string info);
	void display_contact(void);

private:
    std::string infos[5];

};


#endif 

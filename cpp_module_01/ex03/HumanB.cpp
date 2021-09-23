/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:50:52 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 12:56:57 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon & NewWeapon)
{
    this->_weapon = & NewWeapon;
}

void HumanB::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

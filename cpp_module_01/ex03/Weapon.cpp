/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:13:19 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 11:43:14 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const & type) : _WeaponType(type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string const &type)
{
    this->_WeaponType = type;
}

std::string const & Weapon::getType( void ) const
{
    return (this->_WeaponType);
}
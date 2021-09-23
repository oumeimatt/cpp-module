/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:31:58 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 11:45:16 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WEP) : _name(name) ,_weapon(WEP)
{
    
}

HumanA::~HumanA()
{
}

void HumanA::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

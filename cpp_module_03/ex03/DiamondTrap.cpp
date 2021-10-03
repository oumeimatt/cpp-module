/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:08:03 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:52:43 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ------------------ Constructors ----------------------//

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->_Name = name;
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDammage = FragTrap::_AttackDammage;
    std::cout << this->_Name << " DiamondTrap constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src) : ScavTrap(src._Name), FragTrap(src._Name){
    std::cout << "Copy DiamondTrap constructor called" << std::endl;
    *this = src;
    return ;
}

// -------------------------------------------------------//

// ------------------ Destructor -------------------------//

DiamondTrap::~DiamondTrap(){
    std::cout << this->_Name << " DiamondTrap Destructor called" << std::endl;
    return ;
}

// -------------------------------------------------------//

// ------------ assignation operator overload -------------//

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs){
    this->_Hitpoints = rhs._Hitpoints;
    this->_Name = rhs._Name;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDammage = rhs._AttackDammage;
    return *this;
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap's name : " << this->_Name << std::endl;
    std::cout << "ClapTrap's name : " << ClapTrap::_Name << std::endl;
}

void DiamondTrap::attack(std::string const & target){
    ScavTrap::attack(target);
}
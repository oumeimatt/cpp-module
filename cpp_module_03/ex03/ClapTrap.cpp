/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:33:28 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:42:41 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ------------------ Constructors ----------------------//


ClapTrap::ClapTrap(std::string name) : _Name(name){
    this->_Hitpoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDammage = 0;
    std::cout << this->_Name << " ClapTrap constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const & src){
    std::cout << "Copy ClapTrap constructor called" << std::endl;
    *this = src;
    return ;
}

// -------------------------------------------------------//

// ------------------ Destructor -------------------------//

ClapTrap::~ClapTrap(){
    std::cout << this->_Name << " ClapTrap Destructor called" << std::endl;
    return ;
}

// -------------------------------------------------------//

// ------------ assignation operator overload -------------//

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
    this->_Hitpoints = rhs._Hitpoints;
    this->_Name = rhs._Name;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDammage = rhs._AttackDammage;
    return *this;
}

// --------------------------------------------------------//

void ClapTrap::attack(std::string const & target){
    std::cout << "ClapTrap " << this->_Name << " attack " << target;
    std::cout << ", causing " << this->_AttackDammage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->_Hitpoints <= 0)
    {
        std::cout << this->_Name << " is already dead! (cant take more damage)" << std::endl;
        return ;
    }
    this->_Hitpoints -= amount;
    if (this->_Hitpoints > 0){
        std::cout << this->_Name << " has " << this->_Hitpoints << " hitpoints";
        std::cout << " after taking " << amount << " points of damage" << std::endl;
    }
    else {
        std::cout << this->_Name << " died after taking ";
        std::cout << amount << " points of damage!";
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_Hitpoints <= 0)
        std::cout << this->_Name << "is already dead! (cannot be repaired)" << std::endl;
    else {
        this->_Hitpoints += amount;
        std::cout << this->_Name << " restored " << amount << " points!" << std::endl;
    }
}
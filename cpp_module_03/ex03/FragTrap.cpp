/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:22:27 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:39:18 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ------------------ Constructors ----------------------//

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Hitpoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDammage = 30;
    std::cout << this->_Name << " FragTrap constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap(src._Name){
    std::cout << "Copy FragTrap constructor called" << std::endl;
    *this = src;
    return ;
}

// -------------------------------------------------------//

// ------------------ Destructor -------------------------//

FragTrap::~FragTrap(){
    std::cout << this->_Name << " FragTrap Destructor called" << std::endl;
    return ;
}

// -------------------------------------------------------//

// ------------ assignation operator overload -------------//

FragTrap & FragTrap::operator=(FragTrap const & rhs){
    this->_Hitpoints = rhs._Hitpoints;
    this->_Name = rhs._Name;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDammage = rhs._AttackDammage;
    return *this;
}

// --------------------------------------------------------//

void FragTrap::attack( std::string const & target ){
    std::cout << "FragTrap " << this->_Name << " attack " << target;
    std::cout << ", causing " << this->_AttackDammage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::highFivesGuys( void ){
    std::cout << "High fives Guys !" << std::endl;
    return ;
}
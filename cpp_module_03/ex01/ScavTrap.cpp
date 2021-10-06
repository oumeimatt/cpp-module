/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:45:36 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/05 10:41:13 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ------------------ Constructors ----------------------//

ScavTrap::ScavTrap( void ){}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDammage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap(src._Name) {
    std::cout << "Copy ScavTrap constructor called" << std::endl;
    *this = src;
    return ;
}

// -------------------------------------------------------//

// ------------------ Destructor -------------------------//

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Destructor called" << std::endl;
    return ;
}

// -------------------------------------------------------//

// ------------ assignation operator overload -------------//

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
    this->_Hitpoints = rhs._Hitpoints;
    this->_Name = rhs._Name;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDammage = rhs._AttackDammage;
    return *this;
}

// --------------------------------------------------------//

void ScavTrap::attack( std::string const & target ){
    std::cout << "ScavTrap " << this->_Name << " attack " << target;
    std::cout << ", causing " << this->_AttackDammage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate( void ){
    std::cout << this->_Name << " ScavTrap  have enterred in Gate keeper mode." << std::endl;
    return ;
}


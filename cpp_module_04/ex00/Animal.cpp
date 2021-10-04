/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:00:19 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/04 10:17:07 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal( std::string type ) : _Type(type) {
	std::cout << "animal constructor called" << std::endl;
	return ;
}
Animal::Animal( void ){
	this->_Type = "";
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal( const Animal & src ){
    std::cout << "Copy Animal constructor called" << std::endl;
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal(){
	std::cout << "Animal destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs ) {
	this->_Type = rhs._Type;
	return *this;
}

/*

*/

std::string 			Animal::getType( void ) const{
	return (this->_Type);
}


void					Animal::makeSound( void ) const{
	std::cout << "---PAPAPAPAPA---" << std::endl;
	return;
}
/* ************************************************************************** */
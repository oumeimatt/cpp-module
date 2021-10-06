/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:46:54 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/04 10:46:55 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal( std::string type ) : _Type(type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(){
	this->_Type = "";
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ){
    std::cout << "Copy WrongAnimal constructor called" << std::endl;
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs ) {
	this->_Type = rhs._Type;
	return *this;
}


std::string 			WrongAnimal::getType( void ) const{
	return (this->_Type);
}


void					WrongAnimal::makeSound( void ) const {
	std::cout << "--- WRONGANIMAL SOUND ---" << std::endl;
	return;
}
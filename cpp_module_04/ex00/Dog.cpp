/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:46:40 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/04 13:10:12 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog & src ) : Animal("Cat") {
	std::cout << "Copy Dog constructor called" << std::endl;
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog(){
	std::cout << "Dog destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs ){
	this->_Type = rhs._Type;
	return *this;
}

/*
*/

void				Dog::makeSound( void ) const {
	std::cout << "--- HOW HOW---" << std::endl;
	return ;
}


/* ************************************************************************** */
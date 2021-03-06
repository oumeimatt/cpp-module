/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:46:29 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/04 13:09:59 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::Cat( const Cat & src ) : Animal("Cat") {
	std::cout << "Copy Cat constructor called" << std::endl;
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat(){
	std::cout << "Cat destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs ) {
	this->_Type = rhs._Type;
	return *this;
}

/* */

void				Cat::makeSound( void ) const{
	std::cout << "--- MEOW MEOW ---" << std::endl;
	return ;
}


/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:47:03 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/04 13:10:42 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & src ): WrongAnimal("WrongCat") {
	std::cout << "Copy WrongCat constructor called" << std::endl;
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs ) {
	this->_Type = rhs._Type;
	return *this;
}


/*
*/

void				WrongCat::makeSound( void ) const{
	std::cout << "--- WRONG CAT SOUND ---" << std::endl;
	return ;
}


/* ************************************************************************** */
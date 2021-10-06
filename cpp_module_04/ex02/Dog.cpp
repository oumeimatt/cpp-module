/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:47:47 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 10:43:04 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Dog::Dog( const Dog & src ): Animal("Dog") {
	std::cout << "Copy Dog constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs ){
	*(this->brain) = *(rhs.brain);
	return *this;
}

/*
*/

void				Dog::makeSound( void ) const {
	std::cout << "--- HOW HOW---" << std::endl;
	return ;
}

Brain *				Dog::getBrain( void ){
	return (this->brain);
}


void				Dog::setBrain( std:: string idea ){
	brain->setIdeas(idea);
}

/* ************************************************************************** */
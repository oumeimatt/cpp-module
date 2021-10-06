/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:47:32 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 10:37:08 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Cat::Cat( const Cat & src ): Animal("Cat"){
	std::cout << "Copy Cat constructor called" << std::endl;
	this->brain = new Brain();
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs ) {
	*(this->brain) = *(rhs.brain);
	return *this;
}

/* */

void				Cat::makeSound( void ) const{
	std::cout << "--- MEOW MEOW ---" << std::endl;
	return ;
}

Brain *				Cat::getBrain( void ){
	return (this->brain);
}


void				Cat::setBrain( std:: string idea ){
	brain->setIdeas(idea);
}

/* ************************************************************************** */
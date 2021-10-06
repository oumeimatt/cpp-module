/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:47:22 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 10:40:32 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain(){
	std::cout << "Brain constructor called!" << std::endl;
	return ;
}

Brain::Brain( const Brain & src ){
	std::cout << "Copy Brain constructor called!" << std::endl;
    *this = src;
    return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain(){
	std::cout << "Brain destructor called!" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

void				Brain::setIdeas(std::string idea){
	for(int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

std::string			Brain::getIdea(unsigned int i){
	return(this->ideas[i]);
}
Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
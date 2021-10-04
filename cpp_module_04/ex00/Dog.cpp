#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog( const Dog & src ){
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
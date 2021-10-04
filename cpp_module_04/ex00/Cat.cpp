#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::Cat( const Cat & src ){
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
#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat( const WrongCat & src ){
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
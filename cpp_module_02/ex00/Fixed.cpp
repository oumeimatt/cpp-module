/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:03:47 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/29 14:20:29 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// ------------------ Constructors ----------------------//

Fixed::Fixed( void ) : _fixedPointvalue(0){
    std::cout << "Default Constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

// -------------------------------------------------------//

// ------------------ Destructor -------------------------//

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

// -------------------------------------------------------//

// ------------ assignation operator overload -------------//

Fixed & Fixed::operator=( Fixed const & rhs ){
    std::cout << "Assignation operator called " << std::endl;
    this->_fixedPointvalue = rhs.getRawBits();
    return *this;
}

// -------------------------------------------------------//

// ----------------- setter and getter  ------------------//
int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointvalue);
}

void Fixed::setRawBits(int const raw){
    this->_fixedPointvalue = raw;
}

// -------------------------------------------------------//
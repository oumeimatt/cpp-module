/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:30:38 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/29 14:23:33 by oel-yous         ###   ########.fr       */
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

Fixed::Fixed(const int i) {
    this->_fixedPointvalue = i << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float f){
    this->_fixedPointvalue = roundf(f * (1 << this->_fractionalBits));
    std::cout << "Float constructor called" << std::endl;
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
    return (this->_fixedPointvalue);
}

void Fixed::setRawBits(int const raw){
    this->_fixedPointvalue = raw;
}

// -------------------------------------------------------//

// --------------- convert to float/to int  ---------------//

float Fixed::toFloat( void ) const{
    return (((float)(this->_fixedPointvalue) / (1 << this->_fractionalBits)));
}

int Fixed::toInt( void ) const{
    return (this->_fixedPointvalue / (1 << this->_fractionalBits));
}

// -------------------------------------------------------//

// ------------- overload to the « operator  --------------//

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}

// -------------------------------------------------------//
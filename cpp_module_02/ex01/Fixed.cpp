/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:30:38 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/27 16:24:38 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointvalue(0)
{
    std::cout << "Default Constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(const int i) 
{
    this->_fixedPointvalue = i << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float f)
{
    this->_fixedPointvalue = roundf(f * (1 << this->_fractionalBits));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed & Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Assignation operator called " << std::endl;
    this->_fixedPointvalue = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return (this->_fixedPointvalue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointvalue = raw;
}

float Fixed::toFloat( void ) const
{
    return (((float)(this->_fixedPointvalue) / (float)(1 << this->_fractionalBits)));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedPointvalue / (1 << this->_fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}
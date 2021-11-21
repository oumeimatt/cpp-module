/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:35:41 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/29 15:00:58 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// ------------------ Constructors ----------------------//

Fixed::Fixed( void ) : _fixedPointvalue(0){
    return ;
}

Fixed::Fixed( Fixed const & src){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(const int i) {
    this->_fixedPointvalue = i * (1 << this->_fractionalBits);
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

// ---------------- comparison operators  ----------------//

bool Fixed::operator==(const Fixed &rhs) const{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const{
    return (this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>(const Fixed &rhs) const{
    return (this->getRawBits() > rhs.getRawBits());
}

// -------------------------------------------------------//

// ---------------- arithmetic operators  ----------------//

Fixed Fixed::operator+( Fixed const & rhs ){
    Fixed T;
    T._fixedPointvalue = this->getRawBits() + rhs.getRawBits();
    return T;
}

Fixed Fixed::operator-( Fixed const & rhs ){
    Fixed T;
    T._fixedPointvalue = this->getRawBits() - rhs.getRawBits();
    return T;
}

Fixed Fixed::operator*( Fixed const & rhs ){
    Fixed T;
    T._fixedPointvalue = this->getRawBits() * rhs.getRawBits() / (1 << this->_fractionalBits);
    return T;
}

Fixed Fixed::operator/( Fixed const & rhs ){
    Fixed T;
    try {
        if (rhs.getRawBits() != 0)
            T._fixedPointvalue = this->getRawBits() / rhs.getRawBits() * (1 << this->_fractionalBits);
        else
            throw 1;
    }
    catch(...){
        std::cout << "you cant devide by zero ";
    }
    return T;
}

// -------------------------------------------------------//

// ----------- Increment/decrement operators  -------------//

Fixed& Fixed::operator++(){
    _fixedPointvalue++;
    return *this;
}

Fixed& Fixed::operator--(){
    _fixedPointvalue--;
    return *this;
}

Fixed Fixed::operator++( int ){
    Fixed tmp = *this;
    ++*this;
    return (tmp);
}

Fixed Fixed::operator--( int ){
    Fixed tmp = *this;
    --*this;
    return (tmp); 
}

// -------------------------------------------------------//

// -------------------- max / min   ----------------------//

Fixed& Fixed::max( Fixed &lhs,  Fixed &rhs){
    return lhs > rhs ? lhs : rhs;
}

Fixed& Fixed::min( Fixed &lhs,  Fixed &rhs){
    return lhs < rhs ? lhs : rhs;
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs){
    return lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs;
}

const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs){
    return lhs.getRawBits() < rhs.getRawBits() ? lhs : rhs;
}

// -------------------------------------------------------//

// ------------- overload to the « operator  --------------//

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}

// -------------------------------------------------------//


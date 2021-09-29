/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:34:56 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/29 13:41:22 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h> 


class Fixed
{
private:
    int _fixedPointvalue;
    const static int _fractionalBits = 8;
public:
    Fixed( void );
    Fixed( const int i);
    Fixed( const float f);
    Fixed( Fixed  const & src);
    ~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed operator+(const Fixed & rhs);
    Fixed operator-(const Fixed & rhs);
    Fixed operator*(const Fixed & rhs);
    Fixed operator/(const Fixed & rhs);
    Fixed & operator=(Fixed const & rhs);

    Fixed& operator++();                //pre-increment
    Fixed& operator--();                //pre-decrement
    Fixed operator++( int );            //post-increment
    Fixed operator--( int );            //post-decrement

    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;
    bool operator <(const Fixed &rhs) const;
    bool operator <=(const Fixed &rhs) const;
    bool operator >(const Fixed &rhs) const;
    bool operator >=(const Fixed &rhs) const;

    static Fixed& max( Fixed &lhs,  Fixed &rhs);
    static Fixed& min( Fixed &lhs,  Fixed &rhs);
    static const Fixed& max(const Fixed &lhs, const Fixed &rhs);
    static const Fixed& min(const Fixed &lhs, const Fixed &rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif 

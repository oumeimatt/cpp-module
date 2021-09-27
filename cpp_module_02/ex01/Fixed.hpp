/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:30:42 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/27 16:10:07 by oel-yous         ###   ########.fr       */
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

    Fixed & operator=(Fixed const & rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif 
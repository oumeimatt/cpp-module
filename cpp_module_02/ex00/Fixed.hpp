/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:55:25 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/27 12:43:35 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed
{
private:
    int _fixedPointvalue;
    const static int _fractionalBits = 8;
public:
    Fixed( void );
    Fixed( Fixed  const & src);
    ~Fixed( void );
    int getRawBits( void ) const;
    void setRawBits( int const raw);

    Fixed & operator=(Fixed const & rhs);
};
#endif // !FIXED_HPP
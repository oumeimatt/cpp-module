/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:34:51 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/29 13:43:38 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(4.2f);
	Fixed d(13.37f);
	
	std::cout << "Increment/Decrement Operators\n";
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << "\nArithmetic Operators\n";
	std::cout << "nbr1: " << c << std::endl;
	std::cout << "nbr2: " << d << std::endl;
	std::cout << "nbr1 + nbr2 :" << c + d << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr2 - nbr1 :" << d - c << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr2 * nbr1 :" << d * c << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr2 / nbr1 :" << d / c << std::endl;
	
	std::cout << "\nComparison Operators\n";
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 > nbr2 :" << (c > d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 < nbr2 :" << (c < d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 >= nbr2 :" << (c >= d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 <= nbr2 :" << (c <= d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 == nbr2 :" << (c == d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "nbr1 != nbr2 :" << (c != d) << std::endl;
	
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "max of nbr1 and nbr2 is :" << Fixed::max(c, d) << std::endl;
	c = Fixed(4.2f);
	d = Fixed(13.37f);
	std::cout << "min of nbr1 and nbr2 is :" << Fixed::min(c, d) << std::endl;

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:24:55 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/14 11:36:24 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


template< typename T >
void print( T  & x ) { 
    std::cout << x <<std::endl;
    return;
}


template< typename T >
void print2( T const & x ) { 
    std::cout << (x * 10) <<std::endl;
    return;
}
 
int main() {
    int tab[] = { 0, 1, 2, 3, 4 };
    iter( tab, 5, print );
    std::cout << "---------" << std::endl;
    iter( tab, 5, print2 );
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:57:59 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 16:52:18 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *test;
    Zombie lol("labas");
    lol.announce();
    test = newZombie("FIRST");
    test->announce();
    delete test;
    randomChump("oumixa");
    
}
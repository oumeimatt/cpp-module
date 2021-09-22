/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:56:05 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 18:12:04 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *Zombies;
    Zombies = zombieHorde(10, "oumixa");
    for(int i = 0; i  < 10 ; i++)
        Zombies[i].announce();
    delete [] Zombies;
}
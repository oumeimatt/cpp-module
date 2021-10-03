/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:40:33 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 11:39:00 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ){
    ScavTrap scavtrap("oumixa");
    scavtrap.attack("popsoda");
    scavtrap.takeDamage(1);
    scavtrap.beRepaired(1000);
    scavtrap.guardGate();
}
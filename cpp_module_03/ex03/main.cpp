/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:46:25 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 11:41:10 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ){
    DiamondTrap diamondtrap("oumixa");
    diamondtrap.attack("popsoda");
    diamondtrap.takeDamage(20);
    diamondtrap.beRepaired(10);
    diamondtrap.highFivesGuys();
    diamondtrap.guardGate();
    diamondtrap.whoAmI();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:46:25 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 11:38:08 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ){
    FragTrap fragtrap("oumixa");
    fragtrap.attack("popsoda");
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:14:31 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/01 08:15:06 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string _Name;
    unsigned int _Hitpoints;
    unsigned int _EnergyPoints;
    unsigned int _AttackDammage;

public:
    ClapTrap( void );
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    ClapTrap & operator=(ClapTrap const & rhs);
};


#endif // !CLAPTRAP_HPP

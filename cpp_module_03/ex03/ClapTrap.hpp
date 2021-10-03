/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:33:15 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:41:44 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _Name;
        unsigned int _Hitpoints;
        unsigned int _EnergyPoints;
        unsigned int _AttackDammage;
        ClapTrap( void ) { };
    // private : 

    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        virtual ~ClapTrap();

        virtual void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        ClapTrap & operator=(ClapTrap const & rhs);
};


#endif // !CLAPTRAP_HPP

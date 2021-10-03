/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:02:32 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:49:02 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
    private:
        std::string _Name;
        DiamondTrap();

    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator=( DiamondTrap const & rhs);
        ~DiamondTrap();
        void whoAmI();
        void attack(std::string const & target);
    
};


#endif
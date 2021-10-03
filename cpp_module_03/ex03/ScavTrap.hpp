/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:45:39 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:49:24 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ScavTrap & operator=(ScavTrap const & rhs);
        virtual ~ScavTrap();

        void guardGate( void );
        void attack( std::string const & target );
};



#endif // !SCAVTRAP_HPP
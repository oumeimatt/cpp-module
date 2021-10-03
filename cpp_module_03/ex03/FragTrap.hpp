/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:21:18 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/03 12:49:10 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    FragTrap();
    
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        FragTrap & operator=(FragTrap const & rhs);
        virtual ~FragTrap();

        void highFivesGuys( void );
        void attack( std::string const & target );
};



#endif // !FragTrap_HPP
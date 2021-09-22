/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:58:27 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 16:39:04 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string zombie_name) : name(zombie_name)
    {
        std::cout << this->name << " constructor called" << std::endl;
        return ;
    }
    ~Zombie()
    {
        std::cout << this->name << " destructor called" << std::endl;
        return ;
    }

    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
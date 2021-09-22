/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:56:08 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 18:12:39 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void    set_name(std::string name);    
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif // !ZOMBIE_H

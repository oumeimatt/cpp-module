/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:11:43 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 11:43:25 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon
{
private:
    std::string _WeaponType;

public:
    Weapon(std::string const & type);
    ~Weapon();
    void setType(std::string const & type);
    std::string const & getType( void ) const;
};

#endif // !WEAPON_HPP

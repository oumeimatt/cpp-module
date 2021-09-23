/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:49:10 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 12:54:45 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon & NewWeapon);
    void attack( void );
};


#endif // ! HUMANB_H

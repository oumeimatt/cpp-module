/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:52:30 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/13 10:24:10 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <exception>
#include <string>
# include <ctime>

class Base{ public: virtual ~Base();};
class A : public Base{};
class B : public Base{};
class C : public Base{};

void identify(Base* p);
Base * generate(void);
void identify(Base& p);

#endif 

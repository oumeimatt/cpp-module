/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:47:47 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/24 16:21:23 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef void(Karen::*fptr)();
Karen::Karen()
{
    std::cout << "constructor called" << std::endl;
    return ;
}

Karen::~Karen()
{
    std::cout << "destructor called" << std::endl;
    return ;
}

void Karen::debug( void )
{
    std::cout << "DEBUG: I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
    return ;
}

void Karen::info( void )
{
    std::cout << "INFO: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
    return ;
}

void Karen::warning( void )
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
    return ;
}

void Karen::error( void )
{
    std::cout << "ERROR: This is unacceptable, I want to speak to the manager now." << std::endl;
    return ;
}

void Karen::complain( std::string level )
{
    fptr PTRF[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string comments[4] = {"DEBUG", "INFO","WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(comments[i]))
            (this->*PTRF[i])();
    }
}
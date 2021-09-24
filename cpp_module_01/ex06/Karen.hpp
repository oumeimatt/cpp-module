/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:24:03 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/24 16:24:15 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Karen(/* args */);
    ~Karen();
    void complain( std::string level);
};


#endif // !KAREN_HPP
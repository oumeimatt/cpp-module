/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:42:48 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/24 16:08:07 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void )
{
    Karen karen;

    karen.complain("WARNING");
    karen.complain("INFO");
    karen.complain("DEBUG");
    karen.complain("ERROR");

}
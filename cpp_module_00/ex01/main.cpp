/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:13:51 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/22 11:13:53 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.Class.hpp"

int main(void)
{
    std::string command;
    Phonebook Phonebook;

    while (1)
    {
        std::cout << "-----Please enter a command-----" << std::endl << ">";
        std::getline(std::cin, command);
        if (!command.compare("ADD"))
            Phonebook.add_command();
        else if (!command.compare("SEARCH"))
            Phonebook.search_command();
        else if (!command.compare("EXIT"))
            break ;
    }
}
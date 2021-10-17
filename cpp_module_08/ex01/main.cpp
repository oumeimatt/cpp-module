/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:11:25 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/17 13:57:22 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    srand(time(NULL));
    
    std::vector<int> vec;
    for (size_t i = 0; i < 1; i++)
       vec.push_back(rand() % 5);
    
    Span sp = Span(6);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try{
    sp.addNumber(2);
    sp.addNbrs(vec.begin(), vec.end());
    }
    catch (std::exception &e){ std::cout << e.what() << ": you cannot add more than 5 numbers" << std::endl;};;
    sp.printAll();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

}

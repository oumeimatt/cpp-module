/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:11:25 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/16 18:16:23 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    srand(time(NULL));
    
    std::vector<int> vec;
    for (size_t i = 0; i < 100; i++)
       vec.push_back(rand() % 100);
    
    Span sp = Span(105);
    sp.addNumber(1);
    sp.addNumber(20);
    sp.addNumber(10);
    sp.addNumber(2);
    sp.addNumber(11);
    // sp.addNbrs(vec.begin(), vec.end());
    sp.printAll();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

}

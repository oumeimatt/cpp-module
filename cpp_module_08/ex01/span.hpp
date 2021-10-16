/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:45:52 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/16 18:07:12 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <exception>


class Span
{
private:
    unsigned int _N;
    std::vector<int> _myvec;
    Span( void );
public:
    Span( unsigned int N );
    Span( Span const & src );
    ~Span( void );
    Span &		operator=(  Span const & rhs );

    void addNumber(int number);
    void addNbrs(std::vector<int>::iterator beg, std::vector<int>::iterator end);
    void printAll();
    int shortestSpan();
    int longestSpan();
};



#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:12:48 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/17 13:56:40 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( unsigned int N ): _N(N) {}

Span::Span( Span const & src ){
    *this = src;
    return ;
}

Span &		Span::operator=(  Span const & rhs ){
    this->_N = rhs._N;
    return (*this);
}

Span::~Span( void ){};

void Span::addNumber(int number){
    if (this->_myvec.size() >= this->_N)
        throw (std::exception());
    this->_myvec.push_back(number);
}

int Span::shortestSpan(){
    if (this->_myvec.size() <= 1)
        throw std::exception();
    std::sort(this->_myvec.begin(), this->_myvec.end());
    return (*(_myvec.begin() + 1) - *(_myvec.begin()));
    
}

int Span::longestSpan(){
    if (this->_myvec.size() <= 1)
        throw std::exception();
    return (*std::max_element(_myvec.begin(), _myvec.end()) - (*std::min_element(_myvec.begin(), _myvec.end())));
    
}

void Span::addNbrs(std::vector<int>::iterator beg, std::vector<int>::iterator end){
    if (this->_myvec.size() >= this->_N || (this->_N - std::distance(beg, end)) < 0)
        throw (std::exception());
    _myvec.insert(_myvec.end(), beg, end);
}


void Span::printAll(){
    for (std::vector<int>::iterator it = _myvec.begin() ; it != _myvec.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << std::endl;
}
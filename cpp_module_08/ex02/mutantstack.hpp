/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:22:49 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/17 16:33:12 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <string>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{
public:
    MutantStack(){};
    MutantStack(MutantStack<T> const & src ){
        *this = src;
        return ;
    };
    MutantStack<T> & operator=( MutantStack<T> const & rhs ){
        if (this != &rhs)
        *this = rhs;
        return (*this);
    };
    virtual ~MutantStack(){};
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(){return (this->c.begin());};
    iterator end(){return (this->c.end());};;
};

#endif

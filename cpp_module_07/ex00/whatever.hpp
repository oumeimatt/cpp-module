/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:47:53 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/13 16:18:13 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename M>
M min(M a, M b){
    return (a >= b ? b : a); 
}

template <typename N>
N max(N a, N b){
    return (a > b ? a : b);
}

#endif 
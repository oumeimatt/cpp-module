/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:27:09 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/15 18:21:46 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <exception>
#include <vector>

template<typename T>
int easyfind(T data, int key){
    typename T::iterator p;
    unsigned int dist;
    p = std::find(data.begin(), data.end(), key);
    dist  = p -  data.begin();
    if (dist < data.size())
        return (dist);
    return (-1);
}
#endif
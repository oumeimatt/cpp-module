/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:24:58 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/14 11:37:23 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void iter(T *array, int size, void (*func)(T const &)){
    for (int i = 0; i < size; i++)
        func(array[i]);
}

#endif 
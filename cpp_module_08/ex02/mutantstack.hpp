/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:22:49 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/16 18:32:55 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template<typename T>
class MutantStack {
public:
    Mutantstack();
    Mutantstack(unsigned int n);
    Mutantstack(Mutantstack<T> const & src );
    Mutantstack & operator=( Mutantstack<T> const & rhs );
    ~Mutantstack();


private:
    unsigned int _n;
    T *_arr;
};

#endif
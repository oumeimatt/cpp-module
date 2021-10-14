/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:53:45 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/14 16:50:26 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <string>

template<class T>
class Array
{
public:
    Array();
    Array(unsigned int n);
    Array(Array<T> const & src );
    Array & operator=( Array<T> const & rhs );
    ~Array();
    T& operator[](unsigned int i) ;
    const T& operator[](unsigned int i) const;
    unsigned int size( void )const;
    T *getArr( void )const;
    void setArray(T *arr);

private:
    unsigned int _n;
    T *_arr;

};


template <typename T>
Array<T>::Array() :  _n(0), _arr(new T()) {};


template <typename T>
Array<T>::Array(unsigned int n) : _n(n), _arr(new T[_n]){}

template <typename T>
Array<T>::~Array() {delete [] this->_arr;}


template <typename T>
Array<T>::Array(Array<T> const & src){
    *this = src;
}

template <typename T>
Array<T>& Array<T>::operator=( Array<T> const & rhs ){
    if (*this != rhs){
        delete [] this->_arr;
        this->_n = rhs.size();
        this->_arr = new T[_n];
        *(this->_arr) = *(rhs._arr);
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int i){
    if (i >= this->_n  || (i == 0 && this->_n  == 0))
        throw std::exception();
    else
        return this->_arr[i];
}

template <typename T>
const T& Array<T>::operator[](unsigned int i)const{
    if (i >= this->_n  || (i == 0 && this->_n  == 0))
        throw std::exception();
    else
        return this->_arr[i];
}

template <typename T>
T* Array<T>::getArr( void )const{
    return (this->_arr);
}

template <typename T>
unsigned int Array<T>::size( void )const {
    return this->_n;
}

template <typename T>
void Array<T>::setArray( T *arr ){
    for (unsigned int i = 0; i < this->_n; i++)
        this->_arr[i] = arr[i];
}
#endif 
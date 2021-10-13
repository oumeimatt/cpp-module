/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:40:49 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/13 10:26:52 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}
int main()
{
    Data data;
    data.c = 'o';
    data.f = 42.5;
    data.i = 42;
    data.name = "oumixa";


    std::cout << "===========" << std::endl;
    std::cout << "name == " << data.name << std::endl;
    std::cout << "i == " << data.i << std::endl;
    std::cout << "f == " << data.f << std::endl;
    std::cout << "c == " << data.c << std::endl;
    std::cout << "===========" << std::endl;

    
    uintptr_t intptr = serialize(&data);
    Data *data2 = deserialize(intptr);



    std::cout << "===========" << std::endl;
    std::cout << "name == " << data2->name << std::endl;
    std::cout << "i == " << data2->i << std::endl;
    std::cout << "f == " << data2->f << std::endl;
    std::cout << "c == " << data2->c << std::endl;
    std::cout << "===========" << std::endl;

}

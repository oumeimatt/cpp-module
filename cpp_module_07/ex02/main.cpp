/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:24:20 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/14 18:12:13 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<int> obj;
    Array<int> obj1(3);
    int t[5] = {1, 2, 3, 4, 5};
    obj1.setArray(t);
    Array<int> obj2(obj1);
    try {
        for(int i = 0; i < 3; i++)
            std::cout << obj1[i] << std::endl;
        std::cout << "-------------" << std::endl;
        for(int i = 0; i < 3; i++)
            std::cout << obj2[i] << std::endl;
        std::cout << "-------------" << std::endl;
        // std::cout << obj2[4] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        Array<std::string> obj3;
        std::string arr2[5] = {"nana", "nono", "nini", "lala", "lolo"};
        Array<std::string> obj4(5);
        obj4.setArray(arr2);
        // const Array<std::string> obj5(2);
        // obj5[0] = "NO";
        obj4[0] = "hello";
        obj4[1] = "oumixa";
        obj4[2] = "test";
        obj4[3] = "haha";
        for (int i = 0; i < 5; i++)
            std::cout << obj4[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
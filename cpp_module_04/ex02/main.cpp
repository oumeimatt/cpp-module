/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:46:42 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 11:05:59 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // meta->makeSound();
    
    const Animal *animals[10];
    std::cout << "--------------------------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animals[i]  = new Cat();
        else
            animals[i]  = new Dog();
    }
    std::cout << "--------------------------" << std::endl;
    for (int i = 0 ; i < 10; i++)
    {
        delete animals[i];
    }
    std::cout << "--------------------------" << std::endl;
    /* ----------deep copy of Dog test ----------*/

    Dog dog1;
    dog1.setBrain("TEST1");
    Dog dogCopy(dog1);
    std::cout << "--------------------------" << std::endl;
    std::cout << dog1.getBrain()->getIdea(1) << std::endl;
    std::cout << dog1.getBrain() << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << dogCopy.getBrain()->getIdea(1) << std::endl;
    std::cout << dogCopy.getBrain() << std::endl;
    std::cout << "--------------------------" << std::endl;
    
    /* -------------------------------------------*/

    /* ----------deep copy of Cat test ----------*/
    
    Cat pusspuss;
    pusspuss.setBrain("TEST2");
    Cat yumi(pusspuss) ;
    std::cout << "--------------------------" << std::endl;
    std::cout << pusspuss.getBrain()->getIdea(1) << std::endl;
    std::cout << pusspuss.getBrain() << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << yumi.getBrain()->getIdea(1) << std::endl;
    std::cout << yumi.getBrain() << std::endl;
    std::cout << "--------------------------" << std::endl;

    
    /* -------------------------------------------*/
}

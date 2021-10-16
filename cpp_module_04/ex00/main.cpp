/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:46:42 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/06 11:21:21 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *pusspuss = new Cat();
    const Animal *rick = new Dog();
    std::cout << pusspuss->getType() << std::endl;
    std::cout << rick->getType() << std::endl;
    pusspuss->makeSound();
    rick->makeSound();
    meta->makeSound();
    delete meta;
    delete pusspuss;
    delete rick;
    std::cout << "-------------------------------" << std::endl;
    const WrongAnimal *i = new WrongAnimal();
    const WrongAnimal *j = new WrongCat();
    i->makeSound();
    j->makeSound();
    delete i;
    delete j;
}
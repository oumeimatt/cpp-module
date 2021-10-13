/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:15:58 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/13 10:22:46 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void){
    srand((unsigned) time(0));
	int i = rand() % 3;
    if (i == 0){
        std::cout << "instance of A" <<  std::endl;
        return new A;
    }
    else if (i == 1) {
        std::cout << "instance of B" <<  std::endl;
        return new B;
    }
    else {
    std::cout << "instance of C" <<  std::endl;
    return new C;
    }
}
void identify(Base* p){
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void identify(Base& p){
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception &e){}
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception &e){}
    try{
        C c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception &e){}
}

int main()
{
    identify(generate());
    identify(*generate());
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:23:42 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/10 17:49:31 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

void    convertToInt(char **argv)
{
	std::cout << "int: ";
	try{
	   int i = std::stoi(argv[1]);
	   std::cout << static_cast<int> (i) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}

void    convertToFloat(char **argv)
{
	std::cout << "float: ";
	try{
	   float i = std::stof(argv[1], 0);
	   std::cout << std::fixed << std::setprecision(1) << static_cast<float> (i) << "f" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}

void    convertToDouble(char **argv)
{
	std::cout << "double: ";
	try{
	   double i = std::stod(argv[1],0);
	   std::cout << static_cast<double> (i) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}

void    convertToChar(char **argv)
{
	std::cout << "char: ";
	try{
		int i = std::stoi(argv[1]);
		if (i < 0 || i > 255)
			throw std::exception();
		if (!std::isprint(i))
		{
			std::cout << "Non diplayable" << std::endl;
			return ;
		}
		std::cout << static_cast<char> (i) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}
int main (int argc, char **argv){
	if (argc > 1){
		convertToChar(argv);
		convertToInt(argv);
		convertToFloat(argv);
		convertToDouble(argv);
	}
}
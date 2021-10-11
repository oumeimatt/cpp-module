/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:23:42 by oel-yous          #+#    #+#             */
/*   Updated: 2021/10/11 13:20:21 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

char	getArgType(char **argv){
	std::string s(argv[1]);
	if (s.size() == 1 && !std::isdigit(s[0]))
		return(s[0]);
	else
		return(0);
}

void    convertToInt(char **argv, char c)
{
	std::cout << "int: ";
	if (getArgType(argv)){
		std::cout << static_cast<int>(c) << std::endl;
		return ;
	}
	try{
	   int i = std::stoi(argv[1]);
	   std::cout << static_cast<int> (i) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}

void    convertToFloat(char **argv, char c)
{
	std::cout << "float: ";
	if (getArgType(argv)){
		std::cout << static_cast<float> (c) << std::endl;
		return ;
	}
	try{
	   float i = std::stof(argv[1], 0);
	   std::cout << std::fixed << std::setprecision(1) << static_cast<float> (i) << "f" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}

void    convertToDouble(char **argv, char c)
{
	std::cout << "double: ";
	if (getArgType(argv)){
		std::cout << static_cast<double>(c)<< std::endl;
		return ;
	}
	try{
	   double i = std::stod(argv[1],0);
	   std::cout << static_cast<double> (i) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "impossible "<< std::endl;
	}
}

void    convertToChar(char **argv, char c)
{
	std::cout << "char: ";
	if (getArgType(argv)){
		std::cout << c << std::endl;
		return ;
	}
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
		char c = getArgType(argv);
		convertToChar(argv, c);
		convertToInt(argv, c);
		convertToFloat(argv, c);
		convertToDouble(argv, c);
	}
}
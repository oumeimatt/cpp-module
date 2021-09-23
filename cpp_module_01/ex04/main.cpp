/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <oel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:23:49 by oel-yous          #+#    #+#             */
/*   Updated: 2021/09/23 17:43:07 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "invalid arguments" << std::endl;
        return (1);
    }
    size_t len;
    std::ifstream ifs;
    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    std::string line;
    ifs.open(filename, std::ifstream::in);
    if (!ifs.good())
    {
        std::cout << argv[1] << ": No such file." << std::endl;
        return (1);
    }
    std::transform(filename.begin(), filename.end(), filename.begin(), ::toupper);
    filename +=".replace";
    std::ofstream ofs(filename);
    while (std::getline(ifs, line))
    {
        len = line.find(s1);
        if (len != std::string::npos)
        {
            line.erase(len, s1.size());
            line.insert(len , s2);
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
}
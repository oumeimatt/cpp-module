#include "easyfind.hpp"

int     main()
{
    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50); 

    std::cout << easyfind<std::vector <int> >(v1, 20) << std::endl;

    return 0;
}
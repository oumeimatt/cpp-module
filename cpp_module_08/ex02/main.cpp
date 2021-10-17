#include "mutantstack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    std::cout << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    std::cout << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(983);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << std::endl;

    std::stack<int> s(mstack);
    std::cout << mstack.top() << std::endl;
    std::cout << s.top() << std::endl;

    std::cout << std::endl;

    MutantStack<std::string> mstack2;
    mstack2.push("test1");
    mstack2.push("test2");
    mstack2.push("test3");
    mstack2.push("test4");
    mstack2.push("test5");
    std::cout << mstack2.size() << std::endl;

    std::cout << std::endl;

    std::cout << *mstack2.begin() << std::endl;
    std::cout << *(mstack2.end() - 1) << std::endl;

    std::cout << std::endl;

    mstack2.pop();
    std::cout << *(mstack2.end() - 1) << std::endl;
}
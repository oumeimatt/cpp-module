#include "Phonebook.Class.hpp"

int main(void)
{
    std::string command;
    Phonebook Phonebook;

    while (1)
    {
        std::cout << "please enter a command" << std::endl;
        std::getline(std::cin, command);
        if (!command.compare("ADD"))
            Phonebook.add_command();
        else if (!command.compare("SEARCH"))
            Phonebook.search_command();
        else if (!command.compare("EXIT"))
            break ;
        else
            std::cout << "invalid command , please try ADD or SEARCH or EXIT" << std::endl;
    }
}
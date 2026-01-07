#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main()
{
    PhoneBook   phonebook;
    std::string s;

    std::cout << "Welcome to the PhoneBook, please choose one of the options down below:" << std::endl;
    std::cout << "ADD    --to save a new contact" << std::endl;
    std::cout << "SEARCH --to display a specific contact" << std::endl;
    std::cout << "EXIT   --to close the program" << std::endl;
    while (37)
    {
        std::getline(std::cin, s);
        // need to handle EOF, it breaks the program!
        if (s == "ADD")
        {
            std::cout << s << std::endl;
        }
        else if (s == "SEARCH")
        {
            std::cout << s << std::endl;
        }
        else if (s == "EXIT")
        {
            std::cout << "Program exited successfully." << std::endl;
            break ;
        }
        else
        {
            std::cout << "Invalid option, please try one of the available options down below" << std::endl;
            std::cout << "ADD    --to save a new contact" << std::endl;
            std::cout << "SEARCH --to display a specific contact" << std::endl;
            std::cout << "EXIT   --to close the program" << std::endl;
            continue ;
        }
    }
    return 0;
}

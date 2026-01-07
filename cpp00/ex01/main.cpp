#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main()
{
    PhoneBook   book;
    std::string command;

    std::cout << "Welcome to the PhoneBook, please choose one of the options down below:" << std::endl;
    std::cout << "ADD    --to save a new contact" << std::endl;
    std::cout << "SEARCH --to display a specific contact" << std::endl;
    std::cout << "EXIT   --to close the program" << std::endl;

    while (37) {
        if (!std::getline(std::cin, command))
            break ;
        if (command == "ADD")
            book.AddContact();
        else if (command == "SEARCH")
            book.SearchContact();
        else if (command == "EXIT")
        {
            std::cout << "Program exited successfully." << std::endl;
            break ;
        }
        else if (!command.empty())
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}

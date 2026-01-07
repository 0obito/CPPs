#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook(): _index(0), _total(0) {
}

PhoneBook::~PhoneBook() {
}

std::string AddPromptHelper(std::string prompt) {
    std::string ret;

    while (37) {
        std::cout << prompt;
        if (!getline(std::cin, ret))
            exit(0);
        if (!ret.empty())
            break ;
        std::cout << "Field can't be empty!" << std::endl;
    }
    return (ret);
}

void    PhoneBook::AddContact() {
    std::string tmp;

    tmp = AddPromptHelper("First Name: ");
    _contacts[_index % 8].set_first_name(tmp);

    tmp = AddPromptHelper("Last Name: ");
    _contacts[_index % 8].set_last_name(tmp);

    tmp = AddPromptHelper("Nickname: ");
    _contacts[_index % 8].set_nickname(tmp);

    tmp = AddPromptHelper("Phone Number: ");
    _contacts[_index % 8].set_phone_number(tmp);

    tmp = AddPromptHelper("Darkest Secret: ");
    _contacts[_index % 8].set_darkest_secret(tmp);

    _index += 1;
    if (_total < 8)
        _total += 1;
}

int SearchPromptHelper(std::string prompt, int entries) {
    std::string ret;

    while (37) {
        std::cout << prompt;
        if (!getline(std::cin, ret))
            exit(0);
        else if (ret.empty())
            std::cout << "Index can't be empty!" << std::endl;
        else if (ret.length() != 1 || !isdigit(ret[0]) || ret[0] < '1')
            std::cout << "Index must be a digit, and greater than 0." << std::endl;
        else if (ret[0] > '0' + entries)
        {
            if (entries == 8)
                std::cout << "Index exceeds the maximum possible number of contacts." << std::endl;
            else
                std::cout << "Contact wasn't created yet." << std::endl;
            return (0);
        }
        else
            break ;
    }
    return (ret[0] - '0');
}

std::string TruncHelper(std::string field) {
    if (field.length() > 10)
        return (field.substr(0, 9) + ".");
    return (field);
}

void    PhoneBook::SearchContact() const {
    int i = 0;
    int index;

    if (_total == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return ;
    }

    std::cout << "|" << std::setw(10) << "Index";
    std::cout << "|" << std::setw(10) << "First Name";
    std::cout << "|" << std::setw(10) << "Last Name";
    std::cout << "|" << std::setw(10) << "Nickname";
    std::cout << "|" << std::endl;

    while (i < _total)
    {
        std::cout << "|" << std::setw(10) << i + 1;
        std::cout << "|" << std::setw(10) << TruncHelper(_contacts[i].get_first_name());
        std::cout << "|" << std::setw(10) << TruncHelper(_contacts[i].get_last_name());
        std::cout << "|" << std::setw(10) << TruncHelper(_contacts[i].get_nickname());
        std::cout << "|" << std::endl;
        i += 1;
    }
    index = SearchPromptHelper("Enter the index to diplay: ", _total) - 1;
    if (index >= 0)
    {
        std::cout << "First Name: " << _contacts[index].get_first_name() << std::endl;
        std::cout << "Last Name: " << _contacts[index].get_last_name() << std::endl;
        std::cout << "Nickname: " << _contacts[index].get_nickname() << std::endl;
        std::cout << "Phone Number: " << _contacts[index].get_phone_number() << std::endl;
        std::cout << "Darkest Secret: " << _contacts[index].get_darkest_secret() << std::endl;
    }
}

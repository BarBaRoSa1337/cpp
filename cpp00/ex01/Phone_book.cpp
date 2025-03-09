#include "contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    is_full = 0;
}

void    print_error()
{
    std::cout << "\033[1;31mAll fields must be filled. Contact not saved.\033[0m\n";
}

void PhoneBook::add_contacts()
{
    std::string secret;
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string num;

    std::cin.ignore();

    std::cout << ">> Enter first name: ";
    std::getline(std::cin, f_name);
    if (f_name.empty())
        return print_error();

    std::cout << ">> Enter last name: ";
    std::getline(std::cin, l_name);
    if (l_name.empty())
        return print_error();

    std::cout << ">> Enter nickname: ";
    std::getline(std::cin, nick);
    if (nick.empty())
        return print_error();

    std::cout << ">> Enter phone number: ";
    std::getline(std::cin, num);
    if (num.empty())
        return print_error();

    std::cout << ">> Enter darkest secret: ";
    std::getline(std::cin, secret);
    if (secret.empty())
        return print_error();

    contacts[index].join_Contact(f_name, l_name, nick, num, secret);
    
    if (index == 7) {
        is_full = 1;
        index = 0;
    } else {
        index++;
    }
}

void    PhoneBook::search_contacts()
{
    std::string ind;
    int         tmp = 0;
    int           i = 0;

    if (index == 0 && is_full == 0) {
        std::cout << "\033[1;31m!! No Contacts Are Available !!\033[0m" << std::endl;
        return;
    }
    if (is_full)
        tmp = 8;
    else
        tmp = index;
    std::cout << std::setw(10) << "Index" << "|"
            << std::setw(10) << "First Name" << "|"
            << std::setw(10) << "Last Name" << "|"
            << std::setw(10) << "Nick Name" << std::endl;
    while (i < tmp)
    {
        contacts[i].display_full_Contact(i);
        i++;
    }
    std::cout << "\033[1;32mEnter index of contact: \033[0m";
    std::cin.ignore();
    std::getline(std::cin, ind);
    if (ind.empty() || ind.size() != 1 || ind[0] < '0' || ind[0] > '7')
{
        std::cout << "\033[1;31m!! Invalid index !!; Max index is && Nin is 0 " << index << "\033[0m" << std::endl;
        return;
    }
    contacts[ind[0] - '0'].display_Contact();
}

#include <iostream>
#include <string>
#include "contact.hpp"

int main() {

    std::string name, f_name, l_name, nick, secret, num;
    PhoneBook contacts;
    int i = 0;

    std::cout << "welcome to 90s PhoneBook" << std::endl;
    while (1) {

        std::cout << "Enter 'ADD' to add a contact, 'EXIT' to quit, 'SEARCH' for browsing contacts" << std::endl;
        std::getline(std::cin, name);
    
        if (name == "EXIT") break;
        if (name == "ADD") {
            while (1) {

                std::cout << "Enter Contact first name : ";
                std::getline(std::cin, f_name);
                std::cout << "Enter Contact last name : ";
                std::getline(std::cin, l_name);
                std::cout << "Enter Contact nickname name : ";
                std::getline(std::cin, nick);
                std::cout << "Enter Contact Phone Number name : ";
                std::getline(std::cin, num);
                std::cout << "Enter Contact darkest secret : ";
                std::getline(std::cin, secret);

                if (f_name.empty() || l_name.empty() || nick.empty() || secret.empty() || num.empty())
                {
                    std::cout << "fields canno't be empty!" << std::endl;
                    break;
                }
                contacts.addContact(f_name, l_name, nick, num, secret, i);
                if (i == 3) i = 0;
                else ++i;
                break;
            }
        }
        if (name == "SEARCH")
            contacts.search_contacts(i);
    }
    return 0;
}

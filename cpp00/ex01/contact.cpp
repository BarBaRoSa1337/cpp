#include <iostream>
#include <string>
#include "contact.hpp"

int main() {
    #include <vector>

    Contact contactSaver;
    std::string name, phoneNumber;

    while (1) {
        std::cout << "Enter contact name (or 'exit' to stop): ";
        std::getline(std::cin, name);
        if (name == "EXIT") break;
        if (name == "ADD") {
            std::cout << "Enter name: ";
            std::getline(std::cin, name);
            std::cout << "Enter contact phone number: ";
            std::getline(std::cin, phoneNumber);
            contactSaver.addContact(name, phoneNumber);
        }
        else if (name == "SEARCH") {
            contactSaver.displayContacts();
        }
    }
    return 0;
}
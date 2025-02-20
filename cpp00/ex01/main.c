#include "contact.hpp"

int main() {

    std::string name, f_name, l_name, nick, secret, num;
    Contact contacts[8];
    int i = 0;

    std::cout << "welcome to 90s PhoneBook" << std::endl;
    while (1) {

        std::cout << "Enter 'ADD' to add a contact, 'EXIT' to quit, 'SEARCH' for browsing contacts" << std::endl;
        std::getline(std::cin, name);
    
        if (name == "EXIT") break;
        if (name == "ADD") {
            while (1) {

               
                contacts[i].addContact(f_name, l_name, nick, num, secret);
                // std::cout << contacts[i].displayContact(i) << std::endl;
                if (i == 7) {
                    i = 0;
                }
                else
                    ++i;
                break;
            }
        }
    }
    return 0;
}
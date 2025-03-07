#include "contact.hpp"
#include "PhoneBook.hpp"

int main() {
   PhoneBook phonebook;

    std::cout << "\033[1;32m"
        << "******************************************" << std::endl
        << "*                                        *" << std::endl
        << "*          WELCOME TO PHONEBOOK          *" << std::endl
        << "*                                        *" << std::endl
        << "******************************************" << std::endl
        << "\033[0m";
   while (1)
   {
        std::cout << "commands are ADD, SEARCH, EXIT" << std::endl;
        std::cout << ">> ";
        std::string command;
        std::cin >> command;
        if (command == "ADD")
        {
            phonebook.add_contacts();
        }
        else if (command == "SEARCH")
        {
             phonebook.search_contacts();
        }
        else if (command == "EXIT")
        {
             break;
        }
   }
    return 0;
}
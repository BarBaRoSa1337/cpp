#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:

   void addContact(const std::string& name, const std::string& phoneNumber) {
            if (contacts.size() < 8) {
                contacts.push_back({name, phoneNumber});
            } else {
                contacts[currentIndex] = {name, phoneNumber};
                currentIndex = (currentIndex + 1) % 8;
            }
        }

    void displayContacts() const {
        for (const auto& contact : contacts) {
            std::cout << "Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << std::endl;
        }
    }
private:
    std::string name;
    std::string phoneNumber;
};

#endif
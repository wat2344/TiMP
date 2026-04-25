#include <iostream>
#include <string>

int main() {
    // Requesting person's name
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Sending greetings
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
// extra comment

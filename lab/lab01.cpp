#include <iostream>
#include <string>

int main() {
    std::string name;
    int age = 0;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "- - - - - -" << std::endl;
    std::cout << "Hello " << name << std::endl;
    std::cout << "Age = " << age << std::endl;

    return 0;
}

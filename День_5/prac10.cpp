#include <iostream>
#include <string>

int main() {
    std::string str1 = "hello";
    std::string str2 = "world";

    if (str1.compare(str2) == 0) {
        std::cout << "The strings are equal." << std::endl;
    } else {
        std::cout << "The strings are not equal." << std::endl;
    }

    if (str1 == str2) {
        std::cout << "The strings are equal." << std::endl;
    } else {
        std::cout << "The strings are not equal." << std::endl;
    }

    return 0;
}

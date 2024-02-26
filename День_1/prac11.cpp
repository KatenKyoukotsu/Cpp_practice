#include <iostream>
#include <string>

int main() {
    std::string str = "example string";
    std::string new_str;

    if (str.size() > 10) {
        new_str = str.substr(0, 6);
    } else {
        new_str = str + std::string(12 - str.size(), 'o');
    }

    std::cout << new_str << std::endl;

    return 0;
}
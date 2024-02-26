#include <iostream>
#include <string>

bool isInteger(const std::string& text) {
    try {
        std::stoi(text);
        return true;
    } catch (const std::exception& e) {
        return false;
    }
}

bool isFloat(const std::string& text) {
    try {
        std::stof(text);
        return true;
    } catch (const std::exception& e) {
        return false;
    }
}

int main() {
    std::string text1 = "123";
    std::string text2 = "3.14";
    std::string text3 = "abc";

    if (isInteger(text1)) {
        std::cout << text1 << " is an integer." << std::endl;
    } else {
        std::cout << text1 << " is not an integer." << std::endl;
    }

    if (isFloat(text2)) {
        std::cout << text2 << " is a floating-point number." << std::endl;
    } else {
        std::cout << text2 << " is not a floating-point number." << std::endl;
    }

    if (isInteger(text3)) {
        std::cout << text3 << " is an integer." << std::endl;
    } else {
        std::cout << text3 << " is not an integer." << std::endl;
    }

    return 0;
}

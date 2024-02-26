#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    int len = str.length();

    std::cout << str << ", " << str << ", " << str << std::endl;
    std::cout << "Количество символов в строке: " << len << std::endl;

    return 0;
}

#include <iostream>
#include <string>

void removeChars(std::string& str, int pos, int count) {
    if (pos >= 0 && pos < str.length() && count > 0) {
        str.erase(pos, count);
        std::cout << "Строка после удаления: " << str << std::endl;
    } else {
        std::cout << "Некорректные параметры удаления!" << std::endl;
    }
}

int main() {
    std::string inputString;
    int position, k;

    std::cout << "Введите строку: ";
    std::getline(std::cin, inputString);

    std::cout << "Введите позицию (номер символа): ";
    std::cin >> position;

    std::cout << "Введите количество символов для удаления: ";
    std::cin >> k;

    removeChars(inputString, position, k);

    return 0;
}

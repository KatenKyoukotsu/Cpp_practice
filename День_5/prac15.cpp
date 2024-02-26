#include <iostream>
#include <string>
#include <cstdio>
#include <math.h>

std::string intToString(int num) {
    return std::to_string(num);
}

std::string doubleToString(double num) {
    char buffer[50];
    int length = std::snprintf(buffer, sizeof(buffer), "%.6f", num);

    if (length >= 0 && length < sizeof(buffer)) {
        return std::string(buffer);
    } else {
        return "Error: Unable to convert to string";
    }
}

int main() {
    double inputNumber;

    std::cout << "Введите число (целое или вещественное): ";
    std::cin >> inputNumber;

    if (std::floor(inputNumber) == inputNumber) {
        int integerNumber = static_cast<int>(inputNumber);
        std::string intString = intToString(integerNumber);
        std::cout << "Строковое представление числа: " << intString << std::endl;
    } else {
        std::string doubleString = doubleToString(inputNumber);
        std::cout << "Строковое представление числа: " << doubleString << std::endl;
    }

    return 0;
}

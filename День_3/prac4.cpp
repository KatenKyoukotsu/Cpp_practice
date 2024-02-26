#include <iostream>

int main() {
    int number;
    std::cout << "Введите число для таблицы умножения: ";
    std::cin >> number;

    for (int i = 1; i <= 10; i++) {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }

    return 0;
}

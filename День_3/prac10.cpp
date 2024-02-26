#include <iostream>

int main() {
    int numbers[10], i, j = 0;

    std::cout << "Введите 10 чисел: " << std::endl;
    for (i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }

    std::cout << "Полученные числа: ";
    for (i = 0; i < 10; i++) {
        if (numbers[i] > 15) {
            numbers[i] = 15;
        }
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

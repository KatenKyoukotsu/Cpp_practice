#include <iostream>

int main() {
    int N;

    std::cout << "Введите натуральное число N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Ошибка ввода. Введите натуральное число." << std::endl;
        return 1;
    }

    std::cout << "Делители числа " << N << ": ";
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

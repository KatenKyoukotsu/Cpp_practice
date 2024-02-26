#include <iostream>

int main() {
    int n;
    long long product = 1;
    std::cout << "Введите значение N: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    std::cout << "Произведение чисел от 1 до " << n << " = " << product;
    return 0;
}

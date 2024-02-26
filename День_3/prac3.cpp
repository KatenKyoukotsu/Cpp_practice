#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    std::cout << "Сумма обратных чисел от 1 до " << n << " равна: " << sum << std::endl;

    return 0;
}

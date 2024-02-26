#include <iostream>

int main() {
    int n, positive = 0, negative = 0, zero = 0;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        std::cout << "Введите число " << i << ": ";
        std::cin >> num;
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    std::cout << "Количество положительных чисел: " << positive << std::endl;
    std::cout << "Количество отрицательных чисел: " << negative << std::endl;
    std::cout << "Количество нулей: " << zero << std::endl;
    return 0;
}

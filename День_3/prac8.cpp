#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    std::cout << "Сумма чисел от 1 до 50, которые делятся на 5 или на 7, равна " << sum << std::endl;
    return 0;
}

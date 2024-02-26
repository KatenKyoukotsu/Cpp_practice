#include <iostream>
#include <cmath>

int main() {
    for (int i = 10; i <= 99; ++i) {
        int reverseNum = (i % 10) * 10 + i / 10;

        int sum = i + reverseNum;
        int squareRoot = static_cast<int>(sqrt(sum));

        if (squareRoot * squareRoot == sum) {
            std::cout << "Число: " << i << ", Обратное число: " << reverseNum << ", Сумма: " << sum << std::endl;
        }
    }

    return 0;
}

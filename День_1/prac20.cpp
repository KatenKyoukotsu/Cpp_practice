#include <iostream>
#include <cctype>

int main() {
    std::string text = "Ваш текст с цифрами 1234567890";
    int maxCount = 0;
    int count = 0;

    for (char c : text) {
        if (std::isdigit(c)) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }

    std::cout << "Наибольшее количество идущих подряд цифр: " << maxCount << std::endl;

    return 0;
}

#include <iostream>
#include <cctype>

int main() {
    std::string text = "Ваш текст с цифрами 1234567890";
    int sum = 0;

    for (char c : text) {
        if (std::isdigit(c)) {
            sum += c - '0';
        }
    }

    std::cout << "Сумма цифр в тексте: " << sum << std::endl;

    return 0;
}

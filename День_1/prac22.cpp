#include <iostream>
#include <cctype>
#include <sstream>

int main() {
    std::string text = "Текст с цифрами 123 и 4567";
    std::stringstream ss(text);
    std::string word;
    int sum = 0;

    while (ss >> word) {
        bool isDigitWord = true;
        for (char c : word) {
            if (!std::isdigit(c)) {
                isDigitWord = false;
                break;
            }
        }
        if (isDigitWord) {
            int num = std::stoi(word);
            sum += num;
        }
    }

    std::cout << "Сумма чисел, образованных из слов, состоящих из цифр: " << sum << std::endl;

    return 0;
}

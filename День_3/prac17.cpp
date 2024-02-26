#include <iostream>
#include <limits>

int main() {
    double sum = 0.0;
    int count = 0;

    char choice;

    while (true) {
        double number;

        std::cout << "Введите число: ";
        std::cin >> number;

        if (std::cin.fail()) {
            std::cout << "Ошибка ввода. Пожалуйста, введите числовое значение." << std::endl;
            std::cin.clear();

            /* clear input buffer... */
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            continue;
        }

        sum += number;
        count++;

        std::cout << "Хотите ввести еще число? (y/n): ";
        std::cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            continue;
        } else {
            break;
        }
    }

    if (count > 0) {
        double average = sum / count;
        std::cout << "Сумма введенных чисел: " << sum << std::endl;
        std::cout << "Среднее арифметическое: " << average << std::endl;
    } else {
        std::cout << "Вы не ввели ни одного числа." << std::endl;
    }

    return 0;
}

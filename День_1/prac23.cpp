#include <iostream>

int main() {
    std::string text = "Текст с    разным количеством    пробелов";
    int maxCount = 0;
    int count = 0;

    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }

    std::cout << "Наибольшее количество подряд идущих пробелов: " << maxCount << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cout << "Введите количество элементов в массиве: ";
    std::cin >> n;

    std::vector<int> array(n);
    std::cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    int min_positive = std::numeric_limits<int>::max(); 
    for (int i = 0; i < n; ++i) {
        if (array[i] > 0 && array[i] < min_positive) {
            min_positive = array[i];
        }
    }

    if (min_positive == std::numeric_limits<int>::max()) {
        std::cout << "В массиве нет положительных элементов" << std::endl;
    } else {
        std::cout << "Минимальный положительный элемент: " << min_positive << std::endl;
    }

    return 0;
}

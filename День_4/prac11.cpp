#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество элементов в массиве: ";
    std::cin >> n;

    std::vector<int> array(n);
    std::cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    std::vector<int> positiveNumbers;
    std::vector<int> negativeNumbers;

    for (int i = 0; i < n; ++i) {
        if (array[i] >= 0) {
            positiveNumbers.push_back(array[i]);
        } else {
            negativeNumbers.push_back(array[i]);
        }
    }

    std::cout << "Положительные числа: ";
    for (int num : positiveNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Отрицательные числа: ";
    for (int num : negativeNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

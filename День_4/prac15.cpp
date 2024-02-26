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

    int max = std::numeric_limits<int>::min(); 
    int min = std::numeric_limits<int>::max(); 

    for (int i = 0; i < n; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    int sum = max + min;
    std::cout << "Сумма максимального и минимального элементов: " << sum << std::endl;

    return 0;
}

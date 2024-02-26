#include <iostream>
#include <vector>

int main() {
    const int size = 6;
    int array[size];
    int count = 0;

    std::cout << "Введите " << size << " целых чисел: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
        if (array[i] > 0) {
            count++;
        }
    }

    std::cout << "Количество положительных элементов: " << count << std::endl;

    return 0;
}

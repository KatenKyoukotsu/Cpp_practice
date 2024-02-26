#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Введите количество элементов в массиве: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Введите " << n << " целых чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int index = 0;
    while (index < n && arr[index] % 2 != 0) {
        ++index;
    }
    if (index == n) {
        std::cout << "В массиве нет четных чисел" << std::endl;
    } else {
        std::cout << "Номер первого четного числа: " << index + 1 << std::endl;
    }

    return 0;
}

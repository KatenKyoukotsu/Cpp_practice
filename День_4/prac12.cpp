#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n, k;
    std::cout << "Введите значения n и k: ";
    std::cin >> n >> k;

    std::vector<int> array = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9}; 

    int min_element = std::numeric_limits<int>::max(); 
    for (int i = n - 1; i < k; ++i) {
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }

    std::cout << "Минимальный элемент среди элементов массива с " << n << "-го по " << k << "-й: " << min_element << std::endl;

    return 0;
}

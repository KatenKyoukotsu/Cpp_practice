#include <iostream>
#include <random>
#include <vector>
#include <climits>
int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(10, 50);
    std::vector<int> array;
    for (int i = 0; i < 10; ++i) {
        array.push_back(dis(gen));
    }
    int max = INT_MIN;
    for (int i = 0; i < array.size(); i += 2) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    if (max != INT_MIN) {
        std::cout << "Максимальный элемент с четным индексом: " << max << std::endl;
    } else {
        std::cout << "В массиве нет элементов с четным индексом." << std::endl;
    }
    return 0;
}

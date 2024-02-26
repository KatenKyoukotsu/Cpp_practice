#include <iostream>
#include <random>
#include <vector>
int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(-10, 30);

    std::vector<int> array;
    for (int i = 0; i < 15; ++i) {
        array.push_back(dis(gen));
    }
    int sum = 0;
    int count = 0;
    for (int num : array) {
        if (num > 0) {
            sum += num;
            count++;
        }
    }
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << "Среднее арифметическое положительных элементов: " << average << std::endl;
    } else {
        std::cout << "В массиве нет положительных элементов." << std::endl;
    }
    return 0;
}

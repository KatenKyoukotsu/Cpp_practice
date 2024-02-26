#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 32;
    int arr[size];

    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 12 + 25;
    }

    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Максимальное количество учеников в классе: " << max << std::endl;

    return 0;
}

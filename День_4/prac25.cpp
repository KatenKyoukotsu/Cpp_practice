#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 10;
    int array[size];

    srand(time(nullptr));

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 5;
    }

    bool hasAdjacentEqualElements = false;
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] == array[i + 1]) {
            hasAdjacentEqualElements = true;
            break;
        }
    }

    if (hasAdjacentEqualElements) {
        std::cout << "The array contains adjacent elements with the same value." << std::endl;
    } else {
        std::cout << "The array does not contain adjacent elements with the same value." << std::endl;
    }

    return 0;
}

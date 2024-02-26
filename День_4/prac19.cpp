#include <iostream>
#include <vector>
#include <limits>

int main() {
    const int size = 60;
    std::vector<int> bookPrices(size);

    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        bookPrices[i] = rand() % 12 + 25;
    }

    int maxPrice = std::numeric_limits<int>::min();
    int maxIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (bookPrices[i] > maxPrice) {
            maxPrice = bookPrices[i];
            maxIndex = i;
        }
    }

    std::cout << "Порядковый номер самой дорогой книги: " << maxIndex + 1 << std::endl;

    return 0;
}

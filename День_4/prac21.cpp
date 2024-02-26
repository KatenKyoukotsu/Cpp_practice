#include <iostream>
#include <vector>

int main() {
    const int size = 20;
    std::vector<int> gameResults(size);

    srand(time(nullptr));
    for (int i = 0; i < size; ++i) {
        gameResults[i] = rand() % 3 + 1;
    }

    std::cout << "Номера команд, которые проиграли: ";
    for (int i = 0; i < size; ++i) {
        if (gameResults[i] == 1) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

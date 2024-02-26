#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {
    const int numTeams = 25;
    std::vector<int> results(numTeams);

    srand(time(nullptr));

    for (int i = 0; i < numTeams; ++i) {
        results[i] = rand() % 3 + 1;
    }

    std::cout << "Indices of the teams that won or drew:" << std::endl;
    for (int i = 0; i < numTeams; ++i) {
        if (results[i] > 1) {
            std::cout << i + 1 << std::endl;
        }
    }

    return 0;
}

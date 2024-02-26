#include <iostream>
#include <string>

void printEveryThird(const std::string& input) {
    for (size_t i = 2; i < input.size(); i += 3) {
        std::cout << input[i] << std::endl;
    }
}

int main() {
    std::string input = "examplestring";
    printEveryThird(input);

    return 0;
}

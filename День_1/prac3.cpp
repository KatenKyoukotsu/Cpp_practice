#include <iostream>
#include <string>

void printFirstLast(const std::string& input) {
    if (input.size() > 5) {
        std::cout << "First three symbols: " << input.substr(0, 3) << std::endl;
        std::cout << "Last three symbols: " << input.substr(input.size() - 3, 3) << std::endl;
    } else {
        for (size_t i = 0; i < input.size(); ++i) {
            std::cout << input[0];
        }
        std::cout << std::endl;
    }
}

int main() {
    std::string input = "examplestring";
    printFirstLast(input);

    return 0;
}

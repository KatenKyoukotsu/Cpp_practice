#include <iostream>
#include <string>

void printFirstLastMiddle(const std::string& input) {
    if (!input.empty()) {
        std::cout << "First symbol: " << input[0] << std::endl;
        std::cout << "Last symbol: " << input[input.size() - 1] << std::endl;
        if (input.size() > 2) {
            std::cout << "Middle symbol: " << input[input.size() / 2] << std::endl;
        }
    }
}

int main() {
    std::string input = "example";
    printFirstLastMiddle(input);

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

void replaceEvenChars(std::string& input) {
    for (size_t i = 0; i < input.size(); i += 2) {
        if (i % 2 == 0) {
            input[i] = 'a';
        } else {
            input[i] = 'c';
        }
    }
}

int main() {
    std::string input = "examplestring";
    replaceEvenChars(input);

    std::cout << input << std::endl;

    return 0;
}

#include <iostream>
#include <string>

std::string excludeSubstring(std::string input) {
    std::string result;
    size_t startPos = input.find("/*");
    size_t endPos = input.find("*/");

    while (startPos != std::string::npos && endPos != std::string::npos) {
        result += input.substr(0, startPos);
        input = input.substr(endPos + 2);
        startPos = input.find("/*");
        endPos = input.find("*/");
    }

    result += input;
    return result;
}

int main() {
    std::string input = "This is a /* test */ string with /* multiple */ comments.";
    std::string output = excludeSubstring(input);
    std::cout << output << std::endl;
    return 0;
}

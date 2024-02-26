#include <iostream>
#include <string>

std::string removeExtraSpaces(const std::string& text) {
    std::string result;
    bool lastWasSpace = false;

    for (char c : text) {
        if (c == ' ') {
            if (!lastWasSpace) {
                result += c;
            }
            lastWasSpace = true;
        } else {
            result += c;
            lastWasSpace = false;
        }
    }

    return result;
}

int main() {
    std::string text = "This is a text with   extra spaces.";
    std::string cleanedText = removeExtraSpaces(text);
    std::cout << "Cleaned text: " << cleanedText << std::endl;
    return 0;
}

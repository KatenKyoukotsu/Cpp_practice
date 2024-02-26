#include <iostream>
#include <string>

bool isValidWord(const std::string& word) {
    if (word.length() >= 3 && word.front() == word.back()) {
        int kCount = 0;
        for (char c : word) {
            if (c == 'k' || c == 'K') {
                kCount++;
            }
        }
        return kCount == 3;
    }
    return false;
}

int main() {
    std::string inputString;

    std::cout << "Введите строку: ";
    std::getline(std::cin, inputString);

    std::string word;
    bool inWord = false;

    for (char c : inputString) {
        if (std::isalpha(c)) {
            if (!inWord) {
                inWord = true;
                word.clear();
            }
            word += c;
        } else {
            if (inWord) {
                if (isValidWord(word)) {
                    std::cout << word << std::endl;
                }
                inWord = false;
            }
            word.clear();
        }
    }

    if (inWord && isValidWord(word)) {
        std::cout << word << std::endl;
    }

    return 0;
}

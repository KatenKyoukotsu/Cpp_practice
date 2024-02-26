#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string mostFrequentWord(const std::string& inputString) {
    std::string word;
    std::vector<std::string> words;

    for (char c : inputString) {
        if (std::isalpha(c)) {
            word += std::tolower(c);
        } else {
            if (!word.empty()) {
                words.push_back(word);
            }
            word.clear();
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    std::sort(words.begin(), words.end());

    std::string mostFrequent;
    int maxCount = 0;
    int count = 1;

    for (size_t i = 1; i < words.size(); ++i) {
        if (words[i] == words[i - 1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                mostFrequent = words[i - 1];
            }
            count = 1;
        }
    }

    if (count > maxCount) {
        maxCount = count;
        mostFrequent = words[words.size() - 1];
    }

    return mostFrequent;
}

int main() {
    std::string inputString;

    std::cout << "Введите строку: ";
    std::getline(std::cin, inputString);

    std::string alphabeticallyOrderedWords;

    std::string word;
    bool inWord = false;

    for (char c : inputString) {
        if (std::isalpha(c)) {
            if (!inWord) {
                inWord = true;
                word.clear();
            }
            word += std::tolower(c);
        } else {
            if (inWord) {
                std::sort(word.begin(), word.end());
                alphabeticallyOrderedWords += word + " ";
                inWord = false;
            }
            word.clear();
        }
    }

    if (inWord) {
        std::sort(word.begin(), word.end());
        alphabeticallyOrderedWords += word + " ";
    }

    std::cout << "Слово, которое чаще всего встречается: " << mostFrequentWord(inputString) << std::endl;
    std::cout << "Последовательность слов с буквами, упорядоченными по алфавиту: " << alphabeticallyOrderedWords << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cctype>

bool isVowel(char c) {
    c = std::tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

bool alternateVowelsConsonants(const std::string& word) {
    if (word.length() < 2) {
        return false;
    }

    bool isVowelExpected = isVowel(word[0]);
    for (size_t i = 1; i < word.length(); ++i) {
        if ((isVowelExpected && isVowel(word[i])) || (!isVowelExpected && !isVowel(word[i]))) {
            return false;
        }
        isVowelExpected = !isVowelExpected;
    }
    return true;
}

int main() {
    std::string text;
    std::cout << "Введите текст: ";
    std::getline(std::cin, text);

    int wordCount = 0;
    std::string word;
    for (char c : text) {
        if (std::isalpha(c)) {
            word += std::tolower(c);
        } else {
            if (!word.empty() && alternateVowelsConsonants(word)) {
                wordCount++;
            }
            word.clear();
        }
    }

    if (!word.empty() && alternateVowelsConsonants(word)) {
        wordCount++;
    }

    std::cout << "Количество слов, у которых гласные и согласные чередуются: " << wordCount << std::endl;

    return 0;
}

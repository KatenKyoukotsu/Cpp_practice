#include <iostream>
#include <string>
#include <algorithm>

bool haveSameLetters(const std::string& word1, const std::string& word2) {
    if (word1.length() != word2.length()) {
        return false;
    }

    std::string sortedWord1 = word1;
    std::string sortedWord2 = word2;

    std::sort(sortedWord1.begin(), sortedWord1.end());
    std::sort(sortedWord2.begin(), sortedWord2.end());

    return sortedWord1 == sortedWord2;
}

int main() {
    std::string inputSentence;
    std::cout << "Введите предложение: ";
    std::getline(std::cin, inputSentence);

    std::string firstWord;
    std::string restOfWords;

    size_t i = 0;
    while (i < inputSentence.length() && !std::isalpha(inputSentence[i])) {
        ++i;
    }

    while (i < inputSentence.length() && std::isalpha(inputSentence[i])) {
        firstWord += std::tolower(inputSentence[i]);
        ++i;
    }

    if (firstWord.empty()) {
        std::cout << "В предложении не найдено слов." << std::endl;
        return 0;
    }

    std::string word;

    while (i < inputSentence.length()) {
        if (std::isalpha(inputSentence[i])) {
            word.clear();
            while (i < inputSentence.length() && std::isalpha(inputSentence[i])) {
                word += std::tolower(inputSentence[i]);
                ++i;
            }

            if (haveSameLetters(firstWord, word) && word != firstWord) {
                restOfWords += word + " ";
            }
        } else {
            ++i;
        }
    }

    if (!restOfWords.empty()) {
        std::cout << "Слова, содержащие те же буквы, что и первое слово предложения: " << restOfWords << std::endl;
    } else {
        std::cout << "Нет слов, содержащих те же буквы, что и первое слово предложения." << std::endl;
    }

    return 0;
}

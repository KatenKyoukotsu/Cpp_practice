#include <iostream>
#include <string>
#include <algorithm>

bool isSymmetric(const std::string& word) {
    return std::equal(word.begin(), word.begin() + word.size() / 2, word.rbegin());
}

std::string findLongestSymmetricWord(const std::string& sentence) {
    std::string longestWord = "";
    std::string currentWord = "";

    for (char c : sentence) {
        if (c == ' ') {
            if (isSymmetric(currentWord) && currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += c;
        }
    }

    if (isSymmetric(currentWord) && currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    return longestWord;
}

int main() {
    std::string sentence = "This level and rotor are examples of symmetric words.";
    std::string longestSymmetricWord = findLongestSymmetricWord(sentence);
    std::cout << "The longest symmetric word in the sentence is: " << longestSymmetricWord << std::endl;
    return 0;
}

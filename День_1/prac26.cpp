#include <iostream>
#include <string>
#include <vector>

std::string encodeLetter(char letter) {
    std::string binary = std::bitset<6>(letter - 1040).to_string();
    return binary;
}

std::string encodeWord(const std::string& word) {
    std::string encoded;
    for (char letter : word) {
        encoded += encodeLetter(letter);
    }
    return encoded;
}

std::string encodeMessage(const std::string& message) {
    std::vector<std::string> words;
    std::string word;
    for (char c : message) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    std::string encodedMessage;
    for (size_t i = 0; i < words.size() - 1; ++i) {
        encodedMessage += encodeWord(words[i]) + "000000";
    }
    encodedMessage += encodeWord(words.back());

    return encodedMessage;
}

int main() {
    std::string word = "СЕРВЕР";
    std::string encodedMessage = encodeMessage(word);

    std::vector<int> decimalNumbers;
    for (size_t i = 0; i < encodedMessage.length(); i += 12) {
        std::string binary = encodedMessage.substr(i, 12);
        decimalNumbers.push_back(std::stoi(binary, nullptr, 2));
    }

    // Выводим три десятичных числа, соответствующих парам букв "СЕ", "РВ" и "ЕР"
    std::cout << decimalNumbers[0] << " " << decimalNumbers[1] << " " << decimalNumbers[2] << std::endl;

    return 0;
}
#include <iostream>
#include <unordered_map>

int main() {
    std::string word1 = "apple";
    std::string word2 = "orange";
    std::unordered_map<char, int> charCount;

    for (char c : word1) {
        charCount[c]++;
    }

    for (char c : word2) {
        charCount[c]++;
    }

    for (auto const& pair : charCount) {
        if (pair.second == 1) {
            std::cout << pair.first << " ";
        }
    }

    return 0;
}

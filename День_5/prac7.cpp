#include <iostream>
#include <unordered_map>

void countConsecutivePairs(const std::string& text) {
    std::unordered_map<std::string, int> pairFrequency;

    for (size_t i = 0; i < text.size() - 1; ++i) {
        std::string pair = text.substr(i, 2);
        pairFrequency[pair]++;
    }

    std::cout << "Occurrences of consecutive pairs:" << std::endl;
    for (const auto& pair : pairFrequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::string text = "abracadabra";
    countConsecutivePairs(text);
    return 0;
}

#include <iostream>
#include <cstring>

char* concatenateStrings(const char** strings, int k) {

    int totalLength = 0;
    for (int i = 0; i < k; ++i) {
        totalLength += std::strlen(strings[i]);
    }

    char* result = new char[totalLength + 1];
    result[0] = '\0';

    // Конкатенация строк
    for (int i = 0; i < k; ++i) {
        std::strcat(result, strings[i]);
    }

    return result;
}

int main() {
    int k;
    std::cout << "Введите количество строк для конкатенации: ";
    std::cin >> k;

    const char** inputStrings = new const char*[k];

    // Ввод строк
    for (int i = 0; i < k; ++i) {
        std::cout << "Введите строку " << i + 1 << ": ";
        std::string str;
        std::cin >> str;

        inputStrings[i] = new char[str.length() + 1];
        std::strcpy(const_cast<char*>(inputStrings[i]), str.c_str());
    }

    char* concatenatedString = concatenateStrings(inputStrings, k);

    std::cout << "Результирующая строка после конкатенации: " << concatenatedString << std::endl;

    delete[] concatenatedString;

    for (int i = 0; i < k; ++i) {
        delete[] inputStrings[i];
    }
    delete[] inputStrings;

    return 0;
}

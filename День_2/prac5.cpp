#include <iostream>

int main() {
    char a, b, c;
    std::cout << "Введите три символа: ";
    std::cin >> a >> b >> c;

    int packed = (a << 16) | (b << 8) | c;
    std::cout << "Упакованное число: " << packed << std::endl;

    char unpackedA = (packed >> 16) & 0xFF;
    char unpackedB = (packed >> 8) & 0xFF;
    char unpackedC = packed & 0xFF;

    std::cout << "Распакованные символы: " << unpackedA << " " << unpackedB << " " << unpackedC << std::endl;

    return 0;
}

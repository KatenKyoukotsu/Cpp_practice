#include <iostream>
#include <algorithm>

int main() {
    int evenDigits[] = {0, 2, 4, 6, 8};

    do {
        int palindrome[9];
        int length = 0;

        for (int i = 0; i < 5; ++i) {
            palindrome[length++] = evenDigits[i];
        }

        for (int i = length - 2; i >= 0; --i) {
            palindrome[length++] = evenDigits[i];
        }

        int palindromeNumber = 0;
        for (int i = 0; i < length; ++i) {
            palindromeNumber = palindromeNumber * 10 + palindrome[i];
        }

        if (palindromeNumber % 3 == 0) {
            std::cout << "Наименьший палиндром: " << palindromeNumber << std::endl;
            break;
        }

    } while (std::next_permutation(evenDigits, evenDigits + 5));

    return 0;
}

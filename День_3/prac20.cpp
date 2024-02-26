#include <iostream>
#include <vector>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int findClosestNumber(int n) {
    int count = countSetBits(n);
    int lower = n - 1;
    int upper = n + 1;

    while (countSetBits(lower) != count && countSetBits(upper) != count) {
        lower--;
        upper++;
    }

    return (countSetBits(lower) == count) ? lower : upper;
}

int main() {
    std::vector<int> numbers;

    int n;
    std::cout << "Введите количество чисел в ряду: ";
    std::cin >> n;

    std::cout << "Введите числа через пробел: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    std::cout << "Ближайшие числа с равным количеством 0 и 1:" << std::endl;
    for (int num : numbers) {
        int closestNumber = findClosestNumber(num);
        std::cout << (closestNumber != 0 ? closestNumber : 0) << std::endl;
    }

    return 0;
}

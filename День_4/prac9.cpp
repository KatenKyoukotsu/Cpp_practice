#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Введите количество элементов в массиве A и B: ";
    std::cin >> n;

    std::vector<int> A(n);
    std::vector<int> B(n);
    std::cout << "Введите " << n << " целых чисел для массива A: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }
    std::cout << "Введите " << n << " целых чисел для массива B: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> B[i];
    }
    std::vector<int> commonElements;
    for (int i = 0; i < n; ++i) {
        if (std::find(B.begin(), B.end(), A[i]) != B.end()) {
            commonElements.push_back(A[i]);
        }
    }
    if (commonElements.empty()) {
        std::cout << "В массивах A и B нет общих элементов" << std::endl;
    } else {
        std::cout << "Общие элементы массивов A и B: ";
        for (int i = 0; i < commonElements.size(); ++i) {
            std::cout << commonElements[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

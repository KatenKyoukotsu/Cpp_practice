#include <iostream>
#include <fstream>
#include <cmath>

int main() {

    int N, K;
    std::cin >> N >> K;
    int* A = new int[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    for (int i = 0; i < K; ++i) {
        for (int j = 1; j < N - 1; ++j) {
            int temp = A[j];
            A[j] = A[j + 1] - A[j];
            A[j + 1] = temp;
        }
    }

    int max_original = A[0];
    int min_original = A[0];
    for (int i = 1; i < N; ++i) {
        if (A[i] > max_original) {
            max_original = A[i];
        }
        if (A[i] < min_original) {
            min_original = A[i];
        }
    }
    int result = max_original - min_original;

    std::ofstream output_file("CONFUSE.SOL");
    output_file << result << std::endl;

    return 0;
}

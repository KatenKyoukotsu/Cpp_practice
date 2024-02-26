#include <iostream>
using namespace std;

int main() {
    int start, end;
    int sum = 0;

    cout << "Введите начало диапазона: ";
    cin >> start;
    cout << "Введите конец диапазона: ";
    cin >> end;

    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << "Сумма всех нечетных чисел в указанном диапазоне: " << sum << endl;

    return 0;
}
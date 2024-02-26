#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int sum = 0;
    int num;

    do {
        cout << "Введите число (0 для выхода): ";
        cin >> num;

        if (num != 0) {
            count++;
            sum += num;
        }
    } while (num != 0);

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Количество чисел: " << count << endl;
        cout << "Общая сумма: " << sum << endl;
        cout << "Среднее арифметическое: " << average << endl;
    } else {
        cout << "Вы не ввели ни одного числа." << endl;
    }

    return 0;
}

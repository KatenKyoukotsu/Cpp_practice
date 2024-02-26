#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите число от 1 до 100: ";
    cin >> num;
    if (num >= 1 && num <= 100) {
        if (num > 50) {
            cout << "Введенное число больше 50." << endl;
        } else if (num < 50) {
            cout << "Введенное число меньше 50." << endl;
        } else {
            cout << "Введенное число равно 50." << endl;
        }
    } else {
        cout << "Число не находится в диапазоне от 1 до 100." << endl;
    }
    return 0;
}

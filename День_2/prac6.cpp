#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Введите два целых числа: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "Числа равны" << endl;
    } else {
        cout << "Числа не равны" << endl;
    }

    return 0;
}

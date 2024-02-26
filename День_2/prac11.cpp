#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Введите первое целое однозначное число: ";
    cin >> num1;
    cout << "Введите второе целое однозначное число: ";
    cin >> num2;

    int result = num1 * num2;

    cout << "Введите результат умножения " << num1 << " на " << num2 << ": ";
    
    int user_result;
    cin >> user_result;

    if (result == user_result) {
        cout << result << endl;
    } else {
        cout << "Неправильно! Правильный результат умножения " << num1 << " на " << num2 << " равен " << result << endl;
    }

    return 0;
}

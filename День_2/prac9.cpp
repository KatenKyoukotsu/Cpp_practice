#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    string result = (num1 > num2) ? "Первое число больше второго" : 
                    (num1 < num2) ? "Первое число меньше второго" : 
                    "Числа равны";

    cout << result << endl;

    return 0;
}

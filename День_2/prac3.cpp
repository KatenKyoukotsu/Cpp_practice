#include <iostream>
using namespace std;

int main() {

    double current_rate = 87;

    double amount_rub;
    cout << "Введите количество рублей для конвертации: ";
    cin >> amount_rub;

    double amount_usd = amount_rub / current_rate;

    cout << "Сумма в долларах: " << amount_usd << endl;

    return 0;
}

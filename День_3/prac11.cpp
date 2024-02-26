#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string ticket_number;
    cout << "Введите номер билета: ";
    cin >> ticket_number;

    int first_half_sum = 0;
    int second_half_sum = 0;
    for (int i = 0; i < 3; ++i) {
        first_half_sum += static_cast<int>(ticket_number[i]);
    }
    for (int i = ticket_number.length()-3; i < ticket_number.length(); ++i) {
        second_half_sum += static_cast<int>(ticket_number[i]);
    }

    if (first_half_sum == second_half_sum) {
        cout << "Этот билет - счастливый!" << endl;
    } else {
        cout << "Этот билет не является счастливым." << endl;
    }

    return 0;
}
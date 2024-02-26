#include <iostream>
using namespace std;

int main() {
    for (int num = 1000; num < 10000; ++num) {
        int thousands = num / 1000;
        int hundreds = (num / 100) % 10;
        int tens = (num / 10) % 10;
        int ones = num % 10;

        if (thousands != hundreds && thousands != tens && thousands != ones &&
            hundreds != tens && hundreds != ones && tens != ones) {
            cout << num << endl;
        }
    }

    return 0;
}
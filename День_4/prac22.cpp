#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int DAYS_IN_JULY = 31;
    int temperatures[DAYS_IN_JULY];
    int sum = 0;
    double average;

    srand(time(NULL));

    for (int i = 0; i < DAYS_IN_JULY; i++) {
        temperatures[i] = rand() % 20 + 15; 
    }

    average = static_cast<double>(sum) / DAYS_IN_JULY;

    cout << "Days when temperature exceeded the average for July (" << average << " degrees Celsius):" << endl;
    for (int i = 0; i < DAYS_IN_JULY; i++) {
        if (temperatures[i] > average) {
            cout << "Day " << i + 1 << ": " << temperatures[i] << " degrees Celsius" << endl;
        }
    }

    return 0;
}

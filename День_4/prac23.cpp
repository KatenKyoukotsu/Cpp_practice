#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int NUM_STUDENTS = 25;
    int heights[NUM_STUDENTS];
    int max_height = 0;

    srand(time(NULL));

    for (int i = 0; i < NUM_STUDENTS; i++) {
        heights[i] = rand() % 50 + 150; 
        if (heights[i] > max_height) {
            max_height = heights[i];
        }
    }

    cout << "Indices of the tallest students (height " << max_height << " cm):" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (heights[i] == max_height) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}

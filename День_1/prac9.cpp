#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "example string";
    string str2 = "another example string";
    int diff_count = 0;

    for (int i = 0; i < std::min(str1.size(), str2.size()); i++) {
        if (str1[i] != str2[i]) {
            diff_count++;
        }
    }

    string larger_str = (str1.size() > str2.size()) ? str1 : str2;

    for (int i = 0; i < diff_count; i++) {
        cout << larger_str << endl;
    }

    return 0;
}

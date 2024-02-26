
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string arr[] = {"apple", "banana", "orange", "pear", "kiwi"};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n, compare);
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}

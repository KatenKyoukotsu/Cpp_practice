#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    string word = "СЕРВЕР";
    string binary = "";
    for (int i = 0; i < word.length(); i++) {
        int num = word[i] - ('A' + 1040);
        binary += bitset<6>(num).to_string();
    }
    string encrypted = "";
    for (int i = 0; i < binary.length(); i += 12) {
        string sub = binary.substr(i, 12);
        int decimal = stoi(sub, nullptr, 2);
        encrypted += to_string(decimal) + " ";
    }
    cout << encrypted << endl;
    return 0;
}

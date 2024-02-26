#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void replaceMiddleChar(string& fragment) {
    char middleChar = fragment[1];
    string availableChars = "abcdefghijklmnopqrstuvwxyz";
    availableChars.erase(remove(availableChars.begin(), availableChars.end(), fragment[0]), availableChars.end());
    availableChars.erase(remove(availableChars.begin(), availableChars.end(), fragment[2]), availableChars.end());
    uniform_int_distribution<int> distribution(0, availableChars.size() - 1);
    random_device rd;
    mt19937 gen(rd());
    char newChar = availableChars[distribution(gen)];
    fragment[1] = newChar;
}

int main() {
    string input = "examplestring";
    vector<string> fragments;

    for (size_t i = 0; i < input.size(); i += 3) {
        fragments.push_back(input.substr(i, 3));
    }

    for (auto& fragment : fragments) {
        replaceMiddleChar(fragment);
    }

    sort(fragments.begin(), fragments.end());

    for (const auto& fragment : fragments) {
        cout << fragment << endl;
    }

    return 0;
}

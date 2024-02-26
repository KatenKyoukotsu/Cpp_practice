#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    string str = "+++++++Hello, World0----------";

    int count_plus = count(str.begin(), str.end(), '+');
    int count_minus = count(str.begin(), str.end(), '-');

    int count_zero = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            count_zero++;
    }

    cout << "Общее количество знаков +: " << count_plus << endl;
    cout << "Общее количество знаков -: " << count_minus << endl;
    cout << "Общее количество знаков, после которых следует цифра 0: " << count_zero << endl;
}
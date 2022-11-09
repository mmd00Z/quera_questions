#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// https://quera.org/problemset/9774/

int charToInt(char ch)
{
    return ch - 48;
}

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] - 48 == 0)
            cout << (str[i] - 48) << ":";
        else
            cout << (str[i] - 48) << ": ";
        for (int j = 0; j < str[i] - 48; j++)
            cout << str[i];
        cout << endl;
    }
    // system("pause");
    return 0;
}
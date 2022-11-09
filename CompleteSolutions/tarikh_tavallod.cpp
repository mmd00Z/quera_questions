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
    cout << "saal:" << str[0] << str[1] << endl
         << "maah:" << str[2] << str[3];
    // system("pause");
    return 0;
}
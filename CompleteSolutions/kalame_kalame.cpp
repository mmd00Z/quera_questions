#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// https://quera.org/problemset/9774/

long int a_be_tavane_b(int a, int b)
{
    long int out = 1;
    for (int i = 0; i < b; i++)
    {
        out *= a;
    }
    return out;
}

int main()
{
    string str;
    cin >> str;
    char chars[5] = {'a', 'e', 'i', 'o', 'u'};
    int number = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            number += (str[i] == chars[j]) ? 1 : 0;
        }
    }
    cout << a_be_tavane_b(2, number) << endl;
    // system("pause");
    return 0;
}
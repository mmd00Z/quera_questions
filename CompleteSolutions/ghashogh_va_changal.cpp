#include <iostream>
// https://quera.org/problemset/145008/
using namespace std;

int main()
{
    int n;
    string str = "";
    cin >> n >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + n])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
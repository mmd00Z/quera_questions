#include <iostream>
// https://quera.ir/problemset/contest/4066/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%B4%DA%AF%D9%88%DB%8C%DB%8C-%D8%AE%D8%B1
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string str[n][2];
    string st[m];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i][0] >> str[i][1];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> st[i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (st[i] == str[j][0])
            {
                cout << str[j][1];
                break;
            }
        }
        cout << " kachal! ";
    }
    cout << endl;
    // system("pause");
    return 0;
}
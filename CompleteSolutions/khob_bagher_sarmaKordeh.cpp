#include <iostream>
#include <string.h>
// https://quera.ir/problemset/contest/10231/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AE%D8%A8-%D8%A8%D8%A7%D9%82%D8%B1-%D8%B3%D8%B1%D9%85%D8%A7-%D8%AE%D9%88%D8%B1%D8%AF%D9%87
using namespace std;
int main()
{
    string str[5];
    bool b = true;
    for (int i = 0; i < 5; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < str[i].size(); j++)
        {
            if ((str[i][j] == 'M' && str[i][j + 1] == 'O' && str[i][j + 2] == 'L' && str[i][j + 3] == 'A' && str[i][j + 4] == 'N' && str[i][j + 5] == 'A'))
            {
                cout << i + 1 << " ";
                b = false;
                break;
            }
            if ((str[i][j] == 'H' && str[i][j + 1] == 'A' && str[i][j + 2] == 'F' && str[i][j + 3] == 'E' && str[i][j + 4] == 'Z'))
            {
                cout << i + 1 << " ";
                b = false;
                break;
            }
        }
    }
    if (b)
    {
        cout << "NOT FOUND!";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    str += "  ";
    int size = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '=')
        {
            if (i == 0)
            {
                for (int j = i; j < str.length(); j++)
                {
                    str[j] = str[j + 1];
                }
            }
            else
            {
                for (int j = i; j < str.length(); j++)
                {
                    str[j - 1] = str[j + 1];
                }
            }
            i -= (i > 1) ? 2 : i + 1;
            size -= 2;
        }
    }

    cout << str << endl;
    // system("pause");
    return 0;
}

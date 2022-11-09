#include <iostream>
// https://quera.org/problemset/106796/
using namespace std;

int main()
{
    long int n = 0, k = 0;
    string str_msg = "";
    cin >> n >> k >> str_msg;

    for (int i = 0; i < k; i++)
    {
        string s;
        s.push_back(str_msg[n - 1]);
        str_msg.insert(0, s);
        str_msg.erase(n);
        for (int j = 0; j < n; j++)
        {
            str_msg[j] += (str_msg[j] == 'z') ? -25 : 1;
        }
    }
    cout << str_msg;
    return 0;
}
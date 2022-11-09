#include <iostream>
//    https://quera.ir/problemset/contest/2659/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AA%D8%B3%D8%AA-%D8%A8%DB%8C%D9%86%D8%A7%DB%8C%DB%8C
using namespace std;

int main()
{
    int n;
    string str1;
    string str2;

    int n_coori = 0;

    cin >> n >> str1 >> str2;

    for (int i = 0; i < n; i++)
    {
        if (str1[i] != str2[i])
            n_coori++;
    }
    cout << n_coori;

    return 0;
}

#include <iostream>
// https://quera.ir/problemset/contest/26651/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B3%D9%88%D8%A7%D9%84-%D9%86%D9%81%D8%B3%DA%AF%DB%8C%D8%B1
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int out = 0;
    for (int i = 0; i < n; i++)
    {
        out += a[i] * b[i];
    }

    cout << out << endl;
    // system("pause");
    return 0;
}
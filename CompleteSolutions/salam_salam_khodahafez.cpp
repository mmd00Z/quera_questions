#include <iostream>
// https://quera.ir/problemset/contest/31021/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B3%D9%84%D8%A7%D9%85-%D8%B3%D9%84%D8%A7%D9%85-%D8%AE%D8%AF%D8%A7%D8%AD%D8%A7%D9%81%D8%B8
using namespace std;

int main()
{
    int n;
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << names[i] + ": salam " + names[i - (j + 1)] + "!\n";
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << names[i] + ": khodafez bacheha!\n";
        for (int j = i + 1; j < n; j++)
        {
            cout << names[j] + ": khodafez " + names[i] + "!\n";
        }
    }
    // system("pause");
    return 0;
}

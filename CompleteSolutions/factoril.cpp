#include <iostream>
//     https://quera.ir/problemset/university/589/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81-%D9%85%D8%A8%D8%A7%D9%86%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D9%BE%D8%A7%DB%8C%DB%8C%D8%B2-%DB%B9%DB%B3-%D9%81%D8%A7%DA%A9%D8%AA%D9%88%D8%B1%DB%8C%D9%84
using namespace std;

int main()
{
    int n;

    int output = 1;
    cin >> n;

    for (int i = n; i > 1; i--)
    {
        output *= i;
    }
    /* or
    for (int i=1 ; i<n ; i++)
    {
        output *= i;
    }*/
    cout << output;

    return 0;
}

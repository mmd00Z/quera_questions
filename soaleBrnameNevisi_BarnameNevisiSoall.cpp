#include <iostream>
//     https://quera.ir/problemset/contest/3408/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B3%D9%88%D8%A7%D9%84-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87-%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87-%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D8%B3%D9%88%D8%A7%D9%84

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str[n];


    for (int i=0 ; i<n ; i++)
    {
        cin >> str[i];
    }

    for (int i=n-1 ; i>=0 ; i--)
    {
        cout << str[i] << " ";
    }



    return 0;
}

#include <iostream>
// https://quera.ir/problemset/contest/34081/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B1%DB%8C%D8%A7%D8%B6%DB%8C%D8%A7%D8%AA-%D8%AF%D8%A7%DB%8C%D8%B1%D9%87-%D8%B9%D8%AC%DB%8C%D8%A8
using namespace std;

int main()
{
    int n = 0, k = 0, i = 1;
    cin >> n >> k;
    unsigned int n_marahel = 1;
    while (true)
    {
        i += k;
        if (i > n)
        {
            i -= n;
        }
        if (i == 1)
            break;
        n_marahel++;
    }
    cout << n_marahel << endl;
    return 0;
}

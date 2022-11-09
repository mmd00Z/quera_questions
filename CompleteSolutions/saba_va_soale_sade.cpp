#include <iostream>
#include <math.h>
// https://quera.ir/problemset/contest/31025/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B5%D8%A8%D8%A7-%D9%88-%D8%B3%D9%88%D8%A7%D9%84-%D8%B3%D8%A7%D8%AF%D9%87
using namespace std;

int main()
{
    int k;
    float n;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        n = n / 2;
    }
    cout << floor(n);
    return 0;
}

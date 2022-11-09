#include <iostream>
// https://quera.ir/problemset/contest/2705/%D8%B3%D8%A4%D8%A7%D9%84-%D8%A8%D8%AF%D8%AE%D9%88%D8%A7%D9%87-%D9%BE%D9%88%DB%8C%D8%A7%D9%86
using namespace std;

int badkhah_helper(int p, int d)
{
    while (true)
    {
        if ((d % p) <= (p / 2) && (d % p) >= 0)
        {
            return d;
        }
        d += d;
    }
}

int main()
{
    int d, p;
    cin >> p >> d;
    cout << badkhah_helper(p, d);
    return 0;
}

#include <iostream>
// https://quera.ir/problemset/university/293/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81-%D9%85%D8%A8%D8%A7%D9%86%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D8%A8%D9%87%D8%A7%D8%B1-%DB%B9%DB%B4-%D8%A7%D8%B9%D8%AF%D8%A7%D8%AF-%D8%A7%D9%88%D9%84
using namespace std;

int main()
{
    int start; // ebteda ye baze
    int end_;  // enteha ye baze
    int n;
    int zed = 0;
    int newLine = 0;
    cin >> start >> end_;

    while (start <= end_)
    {
        n = 2;
        if (start == 1)
        {
            zed = 1;
        }
        else
        {
            zed = 0;
            while (n < start)
            {
                if (start % n == 0)
                {
                    zed = 1;
                    n = start + 1;
                }
                else
                {
                    n = n + 1;
                    zed = 0;
                }
            }
            if (zed == 0)
            {
                cout << start << endl;
            }
        }
        start++;
    }
    return 0;
}

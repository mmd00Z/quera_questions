#include <iostream>
#include <string.h>
//     https://quera.ir/problemset/contest/3430/%D8%B3%D8%A4%D8%A7%D9%84-%D8%A8%D9%84%D9%86%D8%AF%DA%AF%D9%88
using namespace std;

int main()
{
    char input[20];

    cin >> input;

    int len = strlen(input);

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            input[j] = input[i];
        }
        cout << input << endl;
    }

    return 0;
}

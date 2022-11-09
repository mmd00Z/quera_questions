#include <iostream>
// https://quera.ir/problemset/contest/3107/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AA%DB%8C%D8%B4%D8%B1%D8%AA-%D8%A8%D8%B1%D9%86%D8%AF%D9%87
using namespace std;

int main()
{
    int sarshaneXL = 0, ghadXL = 0;
    int sarshaneInp = 0, ghadInp = 0;

    cin >> sarshaneXL >> ghadXL >> sarshaneInp >> ghadInp;

    if (sarshaneInp <= sarshaneXL && ghadInp <= ghadXL)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}

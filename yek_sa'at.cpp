#include <iostream>
// https://quera.ir/problemset/contest/2886/%D8%B3%D8%A4%D8%A7%D9%84-%DB%8C%DA%A9-%D8%B3%D8%A7%D8%B9%D8%AA
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int h = 12-a, m = 60-b;
    if(m == 60){m = 0;}
    if(h == 12){h = 0;}

    if(h < 10) {printf("0%d:",h);}
    else {cout << h << ":";}
    if(m < 10) {printf("0%d",m);}
    else {cout << m;}
    return 0;
}

#include <iostream>
//// https://quera.ir/problemset/contest/4065/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AE%D8%B1-%D8%AF%D8%B1-%DA%86%D9%85%D9%86-%D9%81%D8%B1%D8%A7%D9%88%D9%88%D9%86%D9%87
using namespace std;

int main()
{
    int a , b , l;

    cin >> a >> b >> l;

    int time = 0;

    for (int i=1; i <= l; i++)
    {
        if(i%2 == 1){ time += a;}
          else { time += b; }
    }

    cout << time;

    return 0;
}

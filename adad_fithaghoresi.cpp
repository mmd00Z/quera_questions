#include <iostream>
#include <math.h>
// https://quera.ir/problemset/university/280/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81-%D9%85%D8%A8%D8%A7%D9%86%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D8%A8%D9%87%D8%A7%D8%B1-%DB%B9%DB%B4-%D8%A7%D8%B9%D8%AF%D8%A7%D8%AF-%D9%81%DB%8C%D8%AB%D8%A7%D8%BA%D9%88%D8%B1%D8%AB%DB%8C
using namespace std;
/*struct sides{
    int a;
    int b;
    int c;
};
struct sides side;
void sides_init(int x1 ,int x2 ,int x3){
    int mymax = x1;
    side.c = mymax;
    side.b = x2;
    side.a = x1;
    if(x2 > mymax)
    {
        mymax = x2;
        side.c = mymax;
        side.b = x2;
        side.a = x1;
    }
    if(x3 > mymax)
    {
        mymax = x3;
        side.c = mymax;
        side.b = x2;
        side.a = x1;
    }
}*/
int main()
{
    int inp1, inp2, inp3;
    cin >> inp1 >> inp2 >> inp3;
    /*sides_init(inp1, inp2, inp3);

    if(pow(side.c ,2) == (pow(side.a ,2) + pow(side.b ,2))) {cout << "YES";}
    else cout << "NO";*/

    if(pow(inp1 ,2) == (pow(inp2 ,2) + pow(inp3 ,2)) || pow(inp2 ,2) == (pow(inp3 ,2) + pow(inp1 ,2)) || pow(inp3 ,2) == (pow(inp2 ,2) + pow(inp1 ,2))) {cout << "YES";}
    else cout << "NO";
    return 0;
}

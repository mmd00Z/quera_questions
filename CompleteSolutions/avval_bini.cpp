#include <iostream>
#include <string.h>
// https://quera.ir/problemset/university/649/%D8%A7%D9%88%D9%84%E2%80%8C%D8%A8%DB%8C%D9%86%DB%8C
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    bool IsPrime = true;
    bool IsFirst = true;
    for(int i=a+1; i<b; i++){
        for(int j=2; j<i; j++){
            if(i%j == 0) { IsPrime = false; break; }
        }
        if(IsPrime) {
            if(IsFirst){cout<<i; IsFirst = false;}
            else {cout<< ',' << i;} 
        }
        else {IsPrime = true;}
    }
    //system("pause");
    return 0;
}

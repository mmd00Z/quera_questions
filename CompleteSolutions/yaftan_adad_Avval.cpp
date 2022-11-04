#include <iostream>
#include <string.h>
// https://quera.ir/problemset/university/593/%DB%8C%D8%A7%D9%81%D8%AA%D9%86%20%D8%B9%D8%AF%D8%AF%20%D8%A7%D9%88%D9%84
using namespace std;

int main()
{
    string strInp;
    cin >> strInp;

    int b = 0;
    for(int i=0; i<strInp.length(); i++){
        b += strInp[i] - 48;
    }
    //cout << b;
    bool IsPrime = true;
    int i = 0;
    int j = stoi(strInp) + 1;
    int out;
    while(i < b){
        for(int k=2; k<j; k++){
            if(j%k == 0){IsPrime = false; break;}
        }
        if(IsPrime) {
            out = j;
            i++;
        }
        else IsPrime = true;
        j++;
    }
    cout << out;
    //system("pause");
    return 0;
}

#include <iostream>
#include <string>
// https://quera.ir/problemset/contest/14580/%D8%B3%D8%A4%D8%A7%D9%84-%D8%A8%D8%A7%D8%A8-%D9%88-%DA%A9%D9%84%DB%8C%D8%AF-%D8%AA%D9%84%D9%88%DB%8C%D8%B2%DB%8C%D9%88%D9%86
using namespace std;

int main()
{
    int n=0;
    int x=0;
    int k=0;

    cin >> n >> x >> k;
    string str[n];
    for(int i=0; i<n; i++){
        cin >> str[i];
    }

    for(int i=0; i<k; i++){
        if(x >= n){ x = 1; }
        else { x++; }
    }
    cout << str[x-1] << endl;
    return 0;
}
/*
5 2 5
bob
carl
kevin
phil
tim
*/

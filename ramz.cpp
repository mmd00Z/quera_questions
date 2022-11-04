#include <iostream>
#include <string>
#include <algorithm>
// https://quera.ir/problemset/contest/17902/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B1%D9%85%D8%B2

using namespace std;

int main()
{
    int inp;
    cin >> inp;
    string str;
    cin >> str;

    string charkh[inp];
    for(int i=0; i<inp; i++){
        cin >> charkh[i];
    }

    int out=0;
    for(int i=0; i<inp; i++){
        for(int j=0; j<9; j++){
            if(str[i]==charkh[i][j]){
                out += min(j,9-j);
                break;
            }
        }
    }
    cout << out;
    return 0;
}

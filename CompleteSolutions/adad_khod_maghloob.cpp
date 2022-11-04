#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//https://quera.org/problemset/9774/

int charToInt(char ch){
    return ch-48;
}

int main(){
    string str;
    cin >> str;
    bool check = true;
    for (int i=0; i<str.length(); i++) if(str[i] != str[str.length()-i-1]) check = false;
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
    //system("pause");
    return 0;
}
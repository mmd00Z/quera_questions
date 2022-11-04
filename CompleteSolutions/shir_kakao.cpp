#include <iostream>
// حل نشده
// https://quera.ir/problemset/contest/6395/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B4%DB%8C%D8%B1%DA%A9%D8%A7%DA%A9%D8%A7%D8%A6%D9%88
using namespace std;
int main(){
    long int n;
    cin >> n;
    long int a[n];
    long int n_out = 0;
    for(long int i=0; i<n; i++){cin >> a[i]; n_out += a[i];}
    cout << n_out << endl;
    system("pause");
    return 0;
}
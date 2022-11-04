#include <iostream>
// حل نشده
// https://quera.ir/problemset/contest/15124/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AE%D9%88%D8%A7%D8%A8-%D9%BE%D9%88%D9%BE%DA%A9
using namespace std;
int main(){
    int a, b, x;
    cin >> a >> b >> x;

    int n_maghsom_a = 0, n_maghsom_b = 0;
    for(int i=1; (n_maghsom_b+n_maghsom_a<x && i<x); i++){ n_maghsom_a += (a%i == 0) ? 1:0;  n_maghsom_b += (b%i == 0) ? 1:0; }

    cout << n_maghsom_a*n_maghsom_b << endl;
    //system("pause");
    return 0;
}
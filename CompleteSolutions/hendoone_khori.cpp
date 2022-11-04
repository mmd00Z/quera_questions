#include <iostream>
#include <algorithm>
// https://quera.ir/problemset/contest/35253/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D9%87%D9%86%D8%AF%D9%88%D9%86%D9%87%D8%AE%D9%88%D8%B1%DB%8C
using namespace std;
int main()
{
	int n;
	cin >> n;
	int w[n];
	int w_prin[n];
	for(int i=0; i<n; i++){cin >> w[i]; w_prin[i] = w[i];}
    sort(w_prin, w_prin+n);
    //for(int i=0; i<n; i++) {cout << w_prin[i] << "\t";}
	for(int i=0; i<n; i++){ if(w[i] == w_prin[n-1]) {cout << i+1 << endl; break;} }
    return 0;
}

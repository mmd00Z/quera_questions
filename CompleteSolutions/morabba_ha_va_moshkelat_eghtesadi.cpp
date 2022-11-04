#include <iostream>
// https://quera.ir/problemset/contest/20249/%D8%B3%D8%A4%D8%A7%D9%84-%D9%85%D8%B1%D8%A8%D8%A7%D9%87%D8%A7-%D9%88-%D9%85%D8%B4%DA%A9%D9%84%D8%A7%D8%AA-%D8%A7%D9%82%D8%AA%D8%B5%D8%A7%D8%AF%DB%8C
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int arr[n];
	unsigned long int majmoo = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		majmoo += k - arr[i];
	}
	cout << majmoo/k << endl;
    return 0;
}

#include <iostream>
// https://quera.ir/problemset/contest/2596/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B1%DB%8C%D8%A7%D8%B6%DB%8C%D8%A7%D8%AA-%D8%AD%D8%AF%D8%B3-%D8%B9%D8%AF%D8%AF
using namespace std;

int main()
{
	int q;
	cin >> q;
	int arr[q];
	for(int i=0; i<q; i++){cin >> arr[i];}
	bool check = true;
	int out = 0;
	for(int i=1; i<=1000; i++){
		for(int j=0; j<q; j++){
			if(i%arr[j]!=0){check = false; break;}
		}
		if(check){out++;}
		check = true;
	}
	cout << out;
    return 0;
}

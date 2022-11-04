#include <iostream>
// https://quera.ir/problemset/contest/72882/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%D8%A2%D9%85%D9%88%D8%B2%DB%8C-%D9%BE%D8%B1%DA%AF%D9%88%D8%B4%D8%AA
using namespace std;

int main()
{
	long int n=0, m=0;
	cin >> n >> m;
	string str1[n];
	string str2[n];

	for(int i=0; i<n; i++){ cin >> str1[i]; }
    for(int i=0; i<n; i++){ cin >> str2[i]; }
	int t1=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(str1[i][j] == '*'){t1++;}
		}
	}
	int t2=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(str2[i][j] == '*'){t2++;}
		}
	}
	cout << t1 << " " << t2 << endl;
    return 0;
}

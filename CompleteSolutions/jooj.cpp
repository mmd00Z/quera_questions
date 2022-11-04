#include <iostream>
// https://quera.ir/problemset/contest/72875/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%D8%A2%D9%85%D9%88%D8%B2%DB%8C-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%AC%D9%88%D8%AC
using namespace std;

int main()
{
	long int n;
	cin >> n;
	long int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	for(int i=1; i<(n-1); i++){
		if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
			cout << "Ey baba :(" << endl;
			return 0;
		}
	}
	cout << "Bah Bah! Ajab jooji!" << endl;
    return 0;
}

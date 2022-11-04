#include <iostream>
// https://quera.ir/problemset/contest/2534/%D8%B3%D8%A4%D8%A7%D9%84-%DA%86%DB%8C%D8%AF%D9%85%D8%A7%D9%86
using namespace std;

int main()
{
	int n=0;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	unsigned long long average = 0;
	for(int i=0; i<n; i++){
		average += arr[i];
	}
	average /= n;

	int outTime = 0;
	for(int i=0; i<n; i++){
		if(arr[i] > average) {outTime += arr[i] - average;}
	}
	cout << outTime << endl;

    return 0;
}

#include <iostream>
// https://quera.ir/problemset/contest/49535/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%DA%AF%D8%B2%D8%A7%D8%B1%D8%B4-%DA%A9%D8%A7%D8%B1
using namespace std;
int main()
{
	long n, k;
	cin >> n >> k;
	int arrc[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arrc[i];
	}

	unsigned long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arrc[i];
	}
	if (sum >= k)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}

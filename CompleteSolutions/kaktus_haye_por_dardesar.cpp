#include <iostream>
// https://quera.ir/problemset/contest/52542/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%DA%A9%D8%A7%DA%A9%D8%AA%D9%88%D8%B3%D9%87%D8%A7%DB%8C-%D9%BE%D8%B1%D8%AF%D8%B1%D8%AF%D8%B3%D8%B1
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= 3)
		{
			for (int j = 0; j < arr[i]; j++)
			{
				cout << '*';
			}
			cout << endl;
		}
		else
			cout << "*\n";
	}
	return 0;
}

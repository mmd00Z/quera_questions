#include <iostream>
#include <algorithm>
// https://quera.ir/problemset/contest/9109/%D8%B3%D8%A4%D8%A7%D9%84-%D9%85%D8%AC%DB%8C%D8%AF-%D9%88-%D9%85%D8%A7%DA%98%DB%8C%DA%A9%D9%87%D8%A7%D8%B4
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

	int minOut = 1;
	int out = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[0] == arr[i])
		{
			minOut++;
		}
	}
	int minX = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				minX++;
			}
		}
		if (minOut == minX - 1)
		{
			out = min(out, arr[i]);
		}
		else if (minOut > minX - 1)
		{
			out = arr[i];
			minOut = minX - 1;
		}
		minX = 1;
	}
	cout << out << endl;
	return 0;
}

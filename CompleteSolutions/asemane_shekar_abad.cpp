#include <iostream>
// https://quera.ir/problemset/contest/6082/%D8%B3%D8%A4%D8%A7%D9%84-%D8%A2%D8%B3%D9%85%D8%A7%D9%86-%D8%B4%DA%A9%D8%B1-%D8%A2%D8%A8%D8%A7%D8%AF
using namespace std;
int main()
{
	int m, n;
	cin >> n >> m;
	string str[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	unsigned int nOut = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (str[i][j] == '*')
			{
				nOut++;
			}
		}
	}
	cout << nOut << endl;
	return 0;
}

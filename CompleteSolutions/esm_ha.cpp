#include <iostream>
// https://quera.ir/problemset/contest/2529/%D8%B3%D8%A4%D8%A7%D9%84-%D8%A7%D8%B3%D9%85%D9%87%D8%A7
using namespace std;
int main()
{
	long int n;
	cin >> n;
	string str[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	int ni = 0; // te'dad horoof mokhtalef
	bool check = true;
	int maxni = 0;
	for (int i = 0; i < n; i++)
	{
		ni = 0;
		for (int j = 1; j <= str[i].size(); j++)
		{
			for (int k = j; k > 0; k--)
			{
				if (str[i][j] == str[i][k - 1])
				{
					check = false;
					break;
				}
			}
			if (check)
			{
				ni++;
			}
			check = true;
		}
		if (maxni < ni)
		{
			maxni = ni;
		}
	}
	cout << maxni << endl;
	return 0;
}

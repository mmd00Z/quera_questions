#include <iostream>
// https://quera.ir/problemset/contest/10327/%D8%B3%D8%A4%D8%A7%D9%84-%DA%A9%D8%AF%D8%AA%D8%AE%D9%81%DB%8C%D9%81
using namespace std;
int main()
{
	int n;
	cin >> n;
	string strT;
	cin >> strT;
	string str[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}

	bool check = false;
	bool check1 = false;
	bool meck = false;
	bool meck1 = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < str[i].size(); j++)
		{
			for (int k = 0; k < strT.size(); k++)
			{
				if (str[i][j] == strT[k])
				{
					check = true;
					break;
				}
				else
				{
					check = false;
				}
			}
			if (check)
			{
				check1 = true;
				check = false;
			}
			else
			{
				check1 = false;
				break;
			}
		}
		for (int k = 0; k < strT.size(); k++)
		{
			for (int j = 0; j < str[i].size(); j++)
			{
				if (str[i][j] == strT[k])
				{
					meck = true;
					break;
				}
				else
				{
					meck = false;
				}
			}
			if (meck)
			{
				meck1 = true;
				meck = false;
			}
			else
			{
				meck1 = false;
				break;
			}
		}
		if (check1 && meck1)
		{
			cout << "Yes\n";
			check1 = false;
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}

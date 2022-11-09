#include <iostream>
#include <algorithm>
#include <string>
// https://quera.ir/problemset/contest/91713/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B4%D9%85%D8%A7%D8%B1%D9%87-%D8%B1%D9%86%D8%AF
using namespace std;
bool is_rond(string str)
{
	for (int i = 0; i < 6; i++)
	{
		if (str[i] == str[i + 1] && str[i] == str[i + 2])
		{
			return true;
		}
	}
	int ni = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (str[i] == str[j])
			{
				ni++;
			}
		}
		if (ni >= 4)
		{
			return true;
		}
		ni = 0;
	}
	string strTest = str;
	reverse(strTest.begin(), strTest.end());
	if (strTest == str)
	{
		return true;
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	string str[t];
	for (int i = 0; i < t; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < t; i++)
	{
		if (is_rond(str[i]))
		{
			cout << "Ronde!" << endl;
		}
		else
		{
			cout << "Rond Nist" << endl;
		}
	}
	return 0;
}

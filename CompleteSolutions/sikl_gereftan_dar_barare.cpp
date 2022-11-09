#include <iostream>
#include <string>
#include <algorithm>
// https://quera.ir/problemset/contest/10166/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B3%DB%8C%DA%A9%D9%84-%DA%AF%D8%B1%D9%81%D8%AA%D9%86-%D8%AF%D8%B1-%D8%A8%D8%B1%D8%B1%D9%87
using namespace std;

int main()
{
	int n = 0;
	string str;
	cin >> n >> str;

	string stKeyvoon;
	string stNezam;
	string stShirF;

	int i = 0;
	while (i < n)
	{
		stKeyvoon += "33";
		stKeyvoon += "11";
		stKeyvoon += "22";
		i += 6;
	}
	i = 0;
	while (i < n)
	{
		stNezam += "1";
		stNezam += "2";
		stNezam += "3";
		i += 3;
	}
	i = 0;
	while (i < n)
	{
		stShirF += "2";
		stShirF += "1";
		stShirF += "2";
		stShirF += "3";
		i += 4;
	}
	//////
	int numKeyvoon = 0, numNezam = 0, numShirF = 0;
	for (int k = 0; k < n; k++)
	{
		if (str[k] == stKeyvoon[k])
		{
			numKeyvoon++;
		}
		if (str[k] == stNezam[k])
		{
			numNezam++;
		}
		if (str[k] == stShirF[k])
		{
			numShirF++;
		}
	}
	// cout << stKeyvoon << "\n" << stNezam << "\n" << stShirF << endl;
	int mymax = max(max(numKeyvoon, numNezam), numShirF);
	cout << mymax << endl;
	if (numKeyvoon == mymax)
	{
		cout << "keyvoon" << endl;
	}
	if (numNezam == mymax)
	{
		cout << "nezam" << endl;
	}
	if (numShirF == mymax)
	{
		cout << "shir farhad" << endl;
	}

	return 0;
}

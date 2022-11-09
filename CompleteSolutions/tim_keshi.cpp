#include <iostream>
#include <algorithm>
// https://quera.ir/problemset/contest/80651/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%AA%DB%8C%D9%85-%DA%A9%D8%B4%DB%8C
using namespace std;

int main()
{
	int a[3];
	int b[3];
	int out = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i] >> b[i];
		out += min(a[i], b[i]);
	}
	cout << out << endl;
	return 0;
}

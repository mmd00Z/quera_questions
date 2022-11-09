#include <iostream>
// https://quera.ir/problemset/contest/10325/%D8%B3%D8%A4%D8%A7%D9%84-%D9%87%D9%85%D8%A7%DB%8C%D8%B4-%D8%B2%D9%86%D8%AF%DA%AF%DB%8C-%D8%A8%D9%87%D8%AA%D8%B1
using namespace std;
int main()
{
	int nRadif, nSandali;
	cin >> nRadif >> nSandali;
	if (nSandali <= 10)
	{
		cout << "Right " << 11 - nRadif << " " << nSandali;
	}
	else
	{
		cout << "Left " << 11 - nRadif << " " << 21 - nSandali;
	}
	return 0;
}

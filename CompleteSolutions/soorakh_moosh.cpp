#include <iostream>
// https://quera.ir/problemset/contest/91712/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B3%D9%88%D8%B1%D8%A7%D8%AE-%D9%85%D9%88%D8%B4
using namespace std;

int main()
{
	unsigned int xMoosh, xLaneMoosh;
	cin >> xMoosh >> xLaneMoosh;

	if (xLaneMoosh == xMoosh)
	{
		cout << "Saal Noo Mobarak!" << endl;
		return 0;
	}
	else
	{
		while (xLaneMoosh != xMoosh)
		{
			if (xLaneMoosh > xMoosh)
			{
				cout << 'R';
				xMoosh++;
			}
			else
			{
				cout << 'L';
				xMoosh--;
			}
		}
	}
	return 0;
}

#include <iostream>
// https://quera.ir/problemset/contest/62451/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%AF%D8%B1-%D8%AC%D8%B3%D8%AA%D8%AC%D9%88%DB%8C-%D8%AA%D8%B1%D8%A8
using namespace std;
int main()
{
	int x1, x2, v1, v2; // x1:xAli | v1:vAli | x2:xTorob | v1:vTorob
	cin >> x1 >> v1 >> x2 >> v2;
	if (x1 > x2)
	{
		if (v1 > v2)
		{
			cout << "BORO BORO" << endl;
		}
		else if (v1 < v2)
		{
			cout << "SEE YOU" << endl;
		}
		else
		{
			cout << "WAIT WAIT" << endl;
		} // else: v1 == v2
	}
	else
	{
		if (v1 > v2)
		{
			cout << "SEE YOU" << endl;
		}
		else if (v1 < v2)
		{
			cout << "BORO BORO" << endl;
		}
		else
		{
			cout << "WAIT WAIT" << endl;
		} // else: v1 == v2
	}
	return 0;
}

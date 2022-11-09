#include <iostream>
// https://quera.ir/problemset/contest/33045/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B1%DB%8C%D8%A7%D8%B6%DB%8C%D8%A7%D8%AA-%D9%85%D9%82%D8%B3%D9%88%D9%85%D8%B9%D9%84%DB%8C%D9%87%D9%87%D8%A7%DB%8C-%D8%AF%D8%B1%D8%AF%D8%B3%D8%B1%D8%B3%D8%A7%D8%B2
using namespace std;
int main()
{
	int n = 0, n_maghsom_elayh = 0, majmoo_maghsom_elayh = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				n_maghsom_elayh++;
				majmoo_maghsom_elayh += j;
			}
		}
	}
	cout << n_maghsom_elayh << " " << majmoo_maghsom_elayh << endl;
	return 0;
}

#include <iostream>
#include <algorithm>
// https://quera.ir/problemset/contest/3403/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B3%D8%A7%D8%AF%D9%87-%D8%AA%D8%B1
using namespace std;
int main()
{
	int inp[4];
	float out1, out2, out3, out4, out5;
	cin >> inp[0] >> inp[1] >> inp[2] >> inp[3];
	out1 = inp[0] + inp[1] + inp[2] + inp[3];
	out2 = out1 / 4.0;
	out3 = inp[0] * inp[1] * inp[2] * inp[3];
	int max1 = max(inp[0], inp[1]);
	max1 = max(max1, inp[2]);
	max1 = max(max1, inp[3]);
	out4 = max1;
	int min1 = min(inp[0], inp[1]);
	min1 = min(min1, inp[2]);
	min1 = min(min1, inp[3]);
	out5 = min1;
	printf("Sum : %f\nAverage : %f\nProduct : %f\nMAX : %f\nMIN : %f", out1, out2, out3, out4, out5);
	// cout << "Sum : " << out1 << "\nAverage : " << out2 << "\nProduct : " << out3 << "\nMAX : " << out4 << "\nMIN : " << out5 << endl;
	return 0;
}

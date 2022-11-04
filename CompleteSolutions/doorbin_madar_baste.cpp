#include <iostream>
// https://quera.ir/problemset/contest/2794/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D9%88%D8%B1%D8%A8%DB%8C%D9%86-%D9%85%D8%AF%D8%A7%D8%B1%D8%A8%D8%B3%D8%AA%D9%87
using namespace std;
struct angles{
    int x;
    int y;
};
int main()
{
    angles ang[3];
	for(int i=0; i<3; i++){cin >> ang[i].x >> ang[i].y;}
	int xOut, yOut;
	if(ang[0].x == ang[1].x){xOut = ang[2].x;}
	if(ang[0].x == ang[2].x){xOut = ang[1].x;}
	if(ang[1].x == ang[2].x){xOut = ang[0].x;}

	if(ang[0].y == ang[1].y){yOut = ang[2].y;}
	if(ang[0].y == ang[2].y){yOut = ang[1].y;}
	if(ang[1].y == ang[2].y){yOut = ang[0].y;}

	cout << xOut << " " << yOut << endl;
    return 0;
}

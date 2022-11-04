#include <iostream>

using namespace std;
// هنوز کامل حل نشده و اشتباه است
int main()
{
	string yakh[3];
	string jabe[3];

	for(int i=0; i<3; i++){cin >> yakh[i];}
	for(int i=0; i<3; i++){cin >> jabe[i];}

	int x = 0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(yakh[i] <= jabe[j]){x++; break;}
		}
	}
	if(x >= 2){cout << "zende mimuni" << endl;}
	else {cout << "dari mimiri" << endl;}
    return 0;
}

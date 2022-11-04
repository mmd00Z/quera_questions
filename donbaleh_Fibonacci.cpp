#include <iostream>
// https://quera.org/problemset/303/
using namespace std;

void ShowFibNth(long int n, long int n1){
 if(n != 1 && n1 !=1) {
  cout << n1-n << endl;
  ShowFibNth(n1-n, n);
 }
}

int main()
{
 long int n, n1;
 cin >> n >> n1;
 if(n != 1)
  cout << n << endl;
 ShowFibNth(n, n1);
 cout << 1;
 return 0;
}
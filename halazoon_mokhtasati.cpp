#include <iostream>
// https://quera.org/problemset/597/
using namespace std;

int main()
{
 long int n;
 cin >> n;
 int baghimande = n%4, ans=n/4;
 if(n == 1) cout << 0 << " " << 0;
 else if(baghimande==0) cout << -ans << " " <<  ans;
 else if(baghimande==1) cout << -ans << " " << -ans;
 else if(baghimande==2) cout << ans+1<< " " << -ans;
 else if(baghimande==3) cout << ans+1<< " " <<  ans+1;
 return 0;
}
#include <iostream>
//   https://quera.ir/problemset/contest/20256/%D8%B3%D8%A4%D8%A7%D9%84-%D8%B1%DA%98%DB%8C%D9%85-%D8%B3%D8%AE%D8%AA
using namespace std;

int main()
{
    int r=0 , g=0 ,y=0;
    string input;

    cin >> input;

    for (int i=0 ; i<5 ; i++)
    {
        if (input[i] == 'Y') y++;
         else if (input[i] == 'R') r++;
          else if (input[i] == 'G') g++;
    }

    if ( r>=3 || (r>=2 && y>=2) || y ==5 || g == 0) cout << "nakhor lite";
     else cout << "rahat baash";


    return 0;
}

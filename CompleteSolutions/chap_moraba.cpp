#include <iostream>
//#include <windows.h>
// https://quera.ir/problemset/university/591/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AF%D8%A7%D9%86%D8%B4%DA%AF%D8%A7%D9%87-%D8%B5%D9%86%D8%B9%D8%AA%DB%8C-%D8%B4%D8%B1%DB%8C%D9%81-%D9%85%D8%A8%D8%A7%D9%86%DB%8C-%D8%A8%D8%B1%D9%86%D8%A7%D9%85%D9%87%D9%86%D9%88%DB%8C%D8%B3%DB%8C-%D9%BE%D8%A7%DB%8C%DB%8C%D8%B2-%DB%B9%DB%B3-%DA%86%D8%A7%D9%BE-%D9%85%D8%B1%D8%A8%D8%B9
using namespace std;

/*void gotoxy(int x, int y){
     HANDLE hConsoleOutput;
     COORD dwCursorPosition;
     cout.flush();
     dwCursorPosition.X=x;
     dwCursorPosition.Y=y;
     hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}*/

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    cout << "*";
                }
                else if (j == n - 1)
                {
                    cout << "*\n";
                }
                else
                    cout << " ";
            }
        }
    }

    /*for(int i=0; i<n ; i++){
        gotoxy(i,0);
        cout << "*";
        gotoxy(i,n-1);
        cout << "*";
    }
    for(int i=0; i<n; i++){
        gotoxy(0,i);
        cout << "*";
        gotoxy(n-1,i);
        cout << "*";
    */

    return 0;
}

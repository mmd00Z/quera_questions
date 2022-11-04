#include <iostream>
//https://quera.ir/problemset/contest/3538/%D8%B3%D8%A4%D8%A7%D9%84-%D8%A2%D8%AE-%D8%AC%D9%88%D9%86-%D8%B7%D8%B1%D9%81-%D9%86%DB%8C%D8%B3%D8%AA

using namespace std;

int main()
{
    int t1,t2,t3;
    int tOutPut = 0;

    string days1 , days2 , days3;

    bool checkDay[7] = { true , true, true, true, true, true, true}; //shanbe, shanbe1, shanbe2, shanbe3, shanbe4, shanbe5, jome;

    string day[7]= { "shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome" };

    cin >> t1;
    for (int i = 1; i <= t1; i++)
    {
        cin >> days1;
        for (int j = 1; j <= 7; j++){
            if( days1 == day[j-1]) checkDay[j-1] = false;
        }
    }

    cin >> t2;
    for (int i = 1; i <= t2; i++)
    {
        cin >> days2;
        for (int j = 1; j <= 7; j++){
            if( days2 == day[j-1]) checkDay[j-1] = false;
        }
    }

    cin >> t3;
    for (int i = 1; i <= t3; i++)
    {
        cin >> days3;
        for (int j = 1; j <= 7; j++){
            if( days3 == day[j-1]) checkDay[j-1] = false;
        }
    }

    for (int i=1; i <= 7; i++){
        if (checkDay[i-1]) tOutPut++;
    }
     cout << tOutPut;


    return 0;
}

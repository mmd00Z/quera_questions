#include <iostream>
// https://quera.ir/problemset/contest/3539/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AA%DA%A9%D8%B1%D9%82%D9%85%DB%8C
using namespace std;
int main()
{
    string str_numbers = "";
    int x;
    cin >> str_numbers;
    long int majmoo = str_numbers[0] - 48;
    while (str_numbers.size() > 1)
    {
        for (int i = 1; i < str_numbers.size(); i++)
        {
            majmoo += str_numbers[i] - 48;
        }
        str_numbers = to_string(majmoo);
        majmoo = str_numbers[0] - 48;
    }
    cout << majmoo << endl;
    return 0;
}
/*int number(int xxx)
{
        int ttt = 1;
        int zzz = 10;

        while (ttt <= 10)
        {
            if (xxx < zzz){
                //printf ("adad %d raghami ast\n",ttt);
                return ttt;
            }else {
                zzz = (zzz * 10);
                ttt++;
            }
        }
}

int majmoArgham(int xxx)
{
    int yekan         = xxx % 10;
    int dahgan        =(xxx / 10)%10;
    int sadgan        =(xxx / 100)%10;
    int yekan1000     =(xxx / 1000)%10;
    int dahgan1000    =(xxx / 10000)%10;
    int sadgan1000    =(xxx / 100000)%10;
    int yekanMilyoon  =(xxx / 1000000)%10;
    int dahganMilyoon =(xxx / 10000000)%10;
    int sadganMilyoon =(xxx / 100000000)%10;
    int yekanMilyard  =(xxx / 1000000000)%10;
    int dahganMilyard =(xxx / 10000000000)%10;
    int sadganMilyard =(xxx / 100000000000)%10;

    switch (number(xxx))
    {
        case 1 : return yekan;
        case 2 : return yekan + dahgan;
        case 3 : return yekan + dahgan + sadgan;
        case 4 : return yekan + dahgan + sadgan + yekan1000;
        case 5 : return yekan + dahgan + sadgan + yekan1000 + dahgan1000;
        case 6 : return yekan + dahgan + sadgan + yekan1000 + dahgan1000 + sadgan1000;
        case 7 : return yekan + dahgan + sadgan + yekan1000 + dahgan1000 + sadgan1000 + yekanMilyoon;
        case 8 : return yekan + dahgan + sadgan + yekan1000 + dahgan1000 + sadgan1000 + yekanMilyoon + dahganMilyoon;
        case 9 : return yekan + dahgan + sadgan + yekan1000 + dahgan1000 + sadgan1000 + yekanMilyoon + dahganMilyoon + sadganMilyoon;
        case 10 : return yekan + dahgan + sadgan + yekan1000 + dahgan1000 + sadgan1000 + yekanMilyoon + dahganMilyoon + sadganMilyoon + yekanMilyard;
    }
}

int main()
{
    unsigned long int x;
    int outPut;

    cin >> x;
//    cout << number(x) << "\n" <<majmoArgham(x); //for test tabe'
    outPut = majmoArgham(x);
    while (outPut >= 10) {outPut = majmoArgham(outPut);}
    cout << outPut << endl;



    /*
    scanf ("%d",&x);

    if (x > 999999999){
        printf ("adad vared shode bayad kamtar az 1,000,000,000 bashad");
    }else
    {
    // start part tedad argham

    // end part tedad argham

    // start part majmue argham
        int yekan= x % 10;
        int dahgan = x / 10;
        int sadgan = x / 100;
        int yekan1000 = x / 1000;
        int dahgan1000 = x / 10000;
        int sadgan1000 = x / 100000;
        int yekanMilyoon = x / 1000000;
        int dahganMilyoon = x / 10000000;
        int sadganMilyoon = x / 100000000;

        if (x < 10){
            printf ("majmue argham : %d",yekan);
        }else if (x < 100){
            printf ("majmue argham : %d",(yekan+dahgan));
        }else if (x < 1000){
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan));
        }else if (x < 10000){
            sadgan = (x % 1000) / 100;
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan+yekan1000));
        }else if (x < 100000){
            yekan1000 = (x % 10000) / 1000;
            sadgan = (x % 1000) / 100;
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan+yekan1000+dahgan1000));
        }else if (x < 1000000){
            dahgan1000 = (x % 100000) / 10000;
            yekan1000 = (x % 10000) / 1000;
            sadgan = (x % 1000) / 100;
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan+yekan1000+dahgan1000+sadgan1000));
        }else if (x < 10000000){
            sadgan1000 = (x % 1000000) / 100000;
            dahgan1000 = (x % 100000) / 10000;
            yekan1000 = (x % 10000) / 1000;
            sadgan = (x % 1000) / 100;
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan+yekan1000+dahgan1000+sadgan1000+yekanMilyoon));
        }else if (x < 100000000){
            yekanMilyoon = (x % 10000000) / 1000000;
            sadgan1000 = (x % 1000000) / 100000;
            dahgan1000 = (x % 100000) / 10000;
            yekan1000 = (x % 10000) / 1000;
            sadgan = (x % 1000) / 100;
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan+yekan1000+dahgan1000+sadgan1000+yekanMilyoon+dahganMilyoon));
        }else if (x < 1000000000){
            dahganMilyoon = (x % 100000000) / 10000000;
            yekanMilyoon = (x % 10000000) / 1000000;
            sadgan1000 = (x % 1000000) / 100000;
            dahgan1000 = (x % 100000) / 10000;
            yekan1000 = (x % 10000) / 1000;
            sadgan = (x % 1000) / 100;
            dahgan = (x % 100) / 10;
            printf ("majmue argham : %d",(yekan+dahgan+sadgan+yekan1000+dahgan1000+sadgan1000+yekanMilyoon+dahganMilyoon+sadganMilyoon));
        }
    // end part majmue argham
    }

    return 0;
}
*/

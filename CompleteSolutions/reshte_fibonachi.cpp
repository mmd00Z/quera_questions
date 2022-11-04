// https://quera.org/problemset/17675/

#include <iostream>

using namespace std;

int main()
{
    int a=0, b=1, n;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i == a+b){
            cout << "+";
            a = b;
            b = i;
        }
        else {
            cout << "-";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}

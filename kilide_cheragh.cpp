#include <iostream>
// https://quera.ir/problemset/contest/49028/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%DA%A9%D9%84%DB%8C%D8%AF-%DA%86%D8%B1%D8%A7%D8%BA
using namespace std;

int main()
{
    int n=0;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i]; }

    int out = 0;
    for(int i=0; i<n; i++){
        if((i+1) >= n) { break; }
        if(arr[i] != arr[i+1]){ out++; }
    }
    cout << out;
    return 0;
}

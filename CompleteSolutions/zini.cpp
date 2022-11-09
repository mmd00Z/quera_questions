#include <iostream>
// https://quera.ir/problemset/contest/33023/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B2%DB%8C%D9%86%DB%8C
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    long int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    unsigned long int out = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            //         x > up                     x > down                   x < left                   x < right
            /*if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i+1][j] && arr[i][j] < arr[i][j-1] && arr[i][j] < arr[i][j+1])
            {out++;}
            //         x < up                     x < down                   x > left                   x > right
            if(arr[i][j] < arr[i-1][j] && arr[i][j] < arr[i+1][j] && arr[i][j] > arr[i][j-1] && arr[i][j] > arr[i][j+1])
            {out++;}*/
            out += ((arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i + 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1]) || (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1])) ? 1 : 0;
        }
    }
    cout << out << endl;
    system("pause");
    return 0;
}
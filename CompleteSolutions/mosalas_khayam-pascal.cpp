#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mosalas_data[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                mosalas_data[i][j] = 1;
            }
            else
            {
                mosalas_data[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j != 0)
            {
                mosalas_data[i][j] = mosalas_data[i - 1][j] + mosalas_data[i - 1][j - 1];
            }
            cout << mosalas_data[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // system("pause");
    return 0;
}

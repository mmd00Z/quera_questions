#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int A[n][m];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> A[i][j];

  long int output = 0;
  for (int k = 0; k < m; k++)
  {
    int i = 0, j = 0;
    cin >> i >> j;
    output += A[i - 1][j - 1];
  }

  cout << output;
  return 0;
}
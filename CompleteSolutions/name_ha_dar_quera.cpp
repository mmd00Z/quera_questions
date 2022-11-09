#include <iostream>

using namespace std;

int main()
{
    int n, m;
    bool isYES = false;
    cin >> n >> m;
    int l[n];
    for (int i = 0; i < n; i++)
        cin >> l[i];

    for (int i = 0; i < n; i++)
    {
        if (l[i] == i + 1)
        {
            isYES = true;
            break;
        }
    }
    cout << (isYES ? "NO" : "YES");
    return 0;
}
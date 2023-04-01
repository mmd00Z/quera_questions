// https://quera.org/problemset/31020/

#include <iostream>
#include <cmath> // For ceil function

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int result = ceil((double)n / m);
    cout << result << endl;

    return 0;
}

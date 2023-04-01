// https://quera.org/problemset/28948/
// writed with chatGPT python to cpp

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    while (i < s.length()) {
        if (s[i] == '=') {
            s.erase(i, 1);
            if (i > 0) {
                s.erase(i-1, 1);
            }
            // After removing two characters, decrease the index by 1
            i -= (i > 0)? 1:0;
        } else {
            i++;
        }
    }

    cout << s << endl;
    return 0;
}

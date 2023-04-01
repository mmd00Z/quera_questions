// https://quera.org/problemset/4066/
// writed with chatGPT python to cpp

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, string> dictionary;
    string key, val;
    for (int i = 0; i < n; i++) {
        cin >> key >> val;
        dictionary[key] = val;
    }

    vector<string> txt(m);
    for (int i = 0; i < m; i++) {
        cin >> txt[i];
        if (dictionary.find(txt[i]) != dictionary.end()) {
            txt[i] = dictionary[txt[i]] + " kachal!";
        } else {
            txt[i] = "kachal!";
        }
    }

    for (auto& t : txt) {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}

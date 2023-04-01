// https://quera.org/problemset/15124/
// writed with chatGPT python to cpp

#include <iostream>
#include <vector>
using namespace std;

vector<int> divisors(int n) {
    vector<int> res;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            res.push_back(i);
        }
    }
    return res;
}

int count_pairs(vector<int> list1, vector<int> list2, int n) {
    int count = 0;
    for(int i = 0; i < list1.size(); i++) {
        for(int j = 0; j < list2.size(); j++) {
            if(list1[i] + list2[j] <= n) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    vector<int> div1 = divisors(a);
    vector<int> div2 = divisors(b);
    cout << count_pairs(div1, div2, x) << endl;
    return 0;
}

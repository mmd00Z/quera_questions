#include <iostream>
// https://quera.org/problemset/3558/
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int number_of_n_day = 0, number_of_m_day = 0;
    int list_n[30];
    int list_m[30];

    for (int i = 0; i < n; i++)
    { // fill the list_n whit {A1-B1 , A2-B2, ... An-Bn}
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            list_n[number_of_n_day] = j;
            number_of_n_day++;
        }
    }

    for (int i = 0; i < m; i++)
    { // fill the list_m whit {A1-B1 , A2-B2, ... An-Bn}
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            list_m[number_of_m_day] = j;
            number_of_m_day++;
        }
    }

    int main_number = 0; // n(list_n U list_n)
    for (int i = 0; i < number_of_n_day; i++)
    { // Calculate the main number (list_n U list_m)
        for (int j = 0; j < number_of_m_day; j++)
        {
            if (list_n[i] == list_m[j])
            {
                main_number++;
                break;
            }
        }
    }

    cout << main_number;
    return 0;
}
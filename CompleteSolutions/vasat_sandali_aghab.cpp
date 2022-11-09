#include <iostream>

using namespace std;
struct Mosafer
{
    string name;
    char status_get_on;
};
int main()
{
    Mosafer mosafer[4];
    cin >> mosafer[0].name >> mosafer[0].status_get_on;
    cin >> mosafer[1].name >> mosafer[1].status_get_on;
    cin >> mosafer[2].name >> mosafer[2].status_get_on;
    cin >> mosafer[3].name >> mosafer[3].status_get_on;
    int num_of_L = 0, num_of_R = 0;
    for (int i = 0; i < 4; i++)
    {
        num_of_L += (mosafer[i].status_get_on == 'L') ? 1 : 0;
        num_of_R += (mosafer[i].status_get_on == 'R') ? 1 : 0;
    }
    if (num_of_L > 1)
    {
        int nL = 0;
        for (int i = 0; i < 4; i++)
        {
            if (mosafer[i].status_get_on == 'L')
                nL++;
            if (nL == num_of_L - 1)
            {
                cout << mosafer[i].name << endl;
                system("pause");
                return 0;
            }
        }
    }
    else if (num_of_R > 1)
    {
        int nR = 0;
        for (int i = 0; i < 4; i++)
        {
            if (mosafer[i].status_get_on == 'R')
                nR++;
            if (nR == num_of_R - 1)
            {
                cout << mosafer[i].name << endl;
                system("pause");
                return 0;
            }
        }
    }

    cout << endl;
    system("pause");
    return 0;
}

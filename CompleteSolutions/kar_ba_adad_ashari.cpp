#include <iostream>
// https://quera.org/problemset/292/
using namespace std;

int main()
{
    int n;
    cin >> n;
    float numbers[n];

    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    float maximum = numbers[0], minimum = numbers[0], sum = numbers[0];

    for (int i = 1; i < n; i++)
    {
        sum += numbers[i];
        maximum = (maximum < numbers[i]) ? numbers[i] : maximum;
        minimum = (minimum > numbers[i]) ? numbers[i] : minimum;
    }

    printf("Max: %.3f\nMin: %.3f\nAvg: %.3f", maximum, minimum, sum / n);
    return 0;
}
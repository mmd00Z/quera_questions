#include <iostream>
//   https://quera.ir/problemset/contest/3406/%D8%B3%D8%A4%D8%A7%D9%84-%D9%BE%DB%8C%D8%A7%D8%AF%D9%87-%D8%B3%D8%A7%D8%B2%DB%8C-%D8%B5%D8%AF%DA%AF%D8%A7%D9%86-%D8%AE%D8%B3%D8%AA%D9%87
using namespace std;

int main()
{
  int x1, x2;
  cin >> x1 >> x2;

  int yekan1 = (x1 / 100) % 10;
  int dahgan1 = (x1 / 10) % 10;
  int sadgan1 = x1 % 10;
  int xxx1 = (sadgan1 * 100) + (dahgan1 * 10) + yekan1;

  int yekan2 = (x2 / 100) % 10;
  int dahgan2 = (x2 / 10) % 10;
  int sadgan2 = x2 % 10;
  int xxx2 = (sadgan2 * 100) + (dahgan2 * 10) + yekan2;

  if (xxx1 < xxx2)
    cout << x1 << " < " << x2;
  else if (xxx2 < xxx1)
    cout << x2 << " < " << x1;
  else
    cout << x1 << " = " << x2;

  return 0;
}

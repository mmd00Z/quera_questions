#include <iostream>
//#include <stdio.h>

//       https://quera.ir/problemset/contest/3404/%D8%B3%D8%A4%D8%A7%D9%84-%D8%AA%D9%88-%DA%86%D9%82%D8%AF%D8%B1-%D8%A7%D8%B6%D8%A7%D9%81%D9%87-%D9%88%D8%B2%D9%86-%D8%AF%D8%A7%D8%B1%DB%8C

using namespace std;

int main()
{
  int m = 0;   // jerm
  float l = 0; // ghad
  float bmi = 0;

  cin >> m >> l;
  // cout << m << " " << l <<endl; // for test
  bmi = (float(m) / (l * l));
  // cout << bmi << "\n";
  printf("%.2f\n", bmi);

  if (bmi < 18.5)
  {
    cout << "Underweight";
  }
  else if (bmi >= 18.5 && bmi < 25)
  {
    cout << "Normal";
  }
  else if (bmi >= 25 && bmi < 30)
  {
    cout << "Overweight";
  }
  else if (bmi >= 30)
  {
    cout << "Obese";
  }

  return 0;
}

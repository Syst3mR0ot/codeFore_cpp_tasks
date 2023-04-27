#include <iostream>
using namespace std;

int main() {
  int num1,num2,num3,num4,mult;

  cin >> num1 >> num2 >> num3 >> num4;

  mult = num1*num2*num3*num4;

  cout << mult%100 << endl;

  return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num1,num2,num3,num4,pwr1,pwr2;

  cin >> num1 >> num2 >> num3 >> num4;

  pwr1 = pow(num1,num2);
  pwr2 = pow(num3,num4);

  if(pwr1 < pwr2){
    cout << "NO" << endl;
  }else if(pwr1 > pwr2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
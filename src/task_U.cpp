#include <iostream>
using namespace std;

int main() {
  double floatNum;
  
  cout << "Enter float number : \n";
  cin >> floatNum;

  int intNum = floatNum;
  double subNum = floatNum -intNum;

  if(subNum != 0){
    cout << "float" << " " << intNum << " " << subNum <<endl;
  }else{
    cout << "int " << intNum << endl;
  }

  return 0;
}
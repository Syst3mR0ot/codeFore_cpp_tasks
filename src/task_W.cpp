# include <iostream>
using namespace std;

int main() {

  char op1, op2;
  int num1, num2, inSum, outSum;

  cout << "please enter  your operation : \n\n";
  cin >> num1 >> op1 >> num2 >> op2 >> inSum;

  switch(op1) {

    case '+':
      outSum = num1 + num2;
      if(outSum == inSum){
        cout << "Yes"<< endl;
      }else{
        cout << outSum << endl;
      }
      break;

    case '-':
      outSum = num1 - num2;
      if(outSum == inSum){
        cout << "Yes"<< endl;
      }else{
        cout << outSum << endl;
      }
      break;

    case '*':
      outSum = num1 * num2;
      if(outSum == inSum){
        cout << "Yes"<< endl;
      }else{
        cout << outSum << endl;
      }
      break;

    default:
      cout << "Error .. " << endl;
      break;
  }

  return 0;
}

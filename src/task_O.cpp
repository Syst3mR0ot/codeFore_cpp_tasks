# include <iostream>
using namespace std;

int main() {

  char op;
  int num1, num2;

  cout << "please enter  your operation : \n\n";
  cin >> num1 >> op >> num2;

  switch(op) {

    case '+':
      cout << num1 + num2 << "\n";
      break;

    case '-':
      cout << num1 - num2 << "\n";
      break;

    case '*':
      cout << num1 * num2 << "\n";
      break;

    case '/':
      cout <<  num1 / num2 << "\n";
      break;

    default:
      // If operator is wrong
      cout << "Error, you put wrong operator ..";
      break;
  }

  return 0;
}

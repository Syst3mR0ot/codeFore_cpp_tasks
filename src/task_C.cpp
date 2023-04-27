#include <iostream>

using namespace std;

int main() {
  int X, Y;

  cout << "Please enter 2 numbers to get result: \n";
  cin >> X >> Y;

  if(1 <= X && Y <= 100000){
    cout <<"\n" << X << " + " << Y << " = " << X + Y << "\n";
    cout <<"\n" << X << " * " << Y << " = " << X * Y << "\n";
    cout <<"\n" << X << " - " << Y << " = " << X - Y << "\n";
  }else{
    cout << "please make sure 1 ≤ X and Y ≤ 100000";
  }
  
  return 0;
}

#include <iostream>
#include<iomanip>

using namespace std;

int main() {
  int R;
  const int pi = 3.141592653;

  cout << "Please enter any number between 1 and 100 : \n";
  cin >> R;

  if( R <= 100 && 0 < R){
    cout << R*R*pi << setprecision(9) << "\n";
    
  }else{
    cout << "you must choose number between 1 and 100";
  }
  
  return 0;
}

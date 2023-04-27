#include <iostream>

using namespace std;

int main() {
  int A, B, C, D;


  cout << "Please enter 4 numbers to get there equation result : \n";
  cin >> A >> B >> C >> D;

  if(-100000 <= A , B , C , D && A , B , C , D  >= 100000){
    cout <<"Difference = " << A*B - C*D << "\n";
    
  }else{
    cout << "please make sure the 4 numbers must more than -100000 and less than 100000";
  }
  
  return 0;
}

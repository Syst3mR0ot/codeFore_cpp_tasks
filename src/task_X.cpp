#include <iostream>
using namespace std;

int main() {
  int l1,r1,l2,r2;

  cin >> l1 >> r1 >> l2 >> r2;
  
  if(r1 > l2 ){
    cout << l2 << " " << r1 << endl;
  }else {
    cout << r1-l2 << endl; 
  }

  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int number;


  cout << "Enter Number : \n";
  cin >> number;
if(999 < number && number <= 9999)
    {
        int first_digit = number/1000;

        if (first_digit % 2 == 0)
            {
            cout << "EVEN \n";
            }else{
            cout << "ODD \n";
            }
    }else{
        
        cout << "please put number in range of 999 to 9999 \n";

    }            
  return 0;
}
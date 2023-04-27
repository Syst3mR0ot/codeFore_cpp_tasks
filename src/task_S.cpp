#include <iostream>
using namespace std;

int main() {
  float number;


  cout << "Enter float number in range between 0 and 100 : \n";
  cin >> number;
    if(0 <= number && number <= 25)
    {
     cout << "Interval [0,25] \n";
    }else if(25 < number && number <= 50){        
     cout << "Interval [25,50] \n";
    }else if(50 < number && number <= 75){
     cout << "QInterval [50,75] \n";
    }else if(75 < number && number <= 100){
     cout << "Interval [75,100] \n";
    }else{
     cout << "Out of Interval";
    
    }            
  return 0;
}
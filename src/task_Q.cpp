#include <iostream>
using namespace std;

int main() {
  float x, y;


  cout << "Enter X and Y : \n";
  cin >> x >> y;
    if(0 < x && 0 < y)
    {
     cout << "Q1 \n";
    }else if(x < 0 && 0 < y){        
     cout << "Q2 \n";
    }else if(x < 0 && y < 0){
     cout << "Q3 \n";
    }else if(0 < x && y < 0){
     cout << "Q4 \n";
    }else{
     cout << "please check you input numbers .. \n";
    
    }            
  return 0;
}
#include<iostream>

using namespace std;

int main()
{
	int Num1, Num2 , lastDigit1, lastDigit2;
	
	cout << " Please Enter Any Number to find Last Digit : \n";
	cin >> Num1 >> Num2;
  	
  	lastDigit1 = Num1 % 10;
    lastDigit2 = Num2 % 10;
  	
	cout << "\n The Sum of last digits " << lastDigit1 + lastDigit2 << "\n"; 
		
 	return 0;
}
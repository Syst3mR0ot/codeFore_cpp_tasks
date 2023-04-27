#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double num1, num2;

    cout << "Please Enter 2 Numbers: \n";
    cin >> num1 >> num2;
    cout<<"floor" << num1 <<"/"<< num2 << " = " << floor(num1/num2) << "\n";
    cout<<"ceil" << num1 <<"/"<< num2 << " = " << ceil(num1/num2) << "\n";
	cout<<"round" << num1 <<"/"<< num2 << " = " << llround(num1/num2) << "\n";

 	return 0;
}
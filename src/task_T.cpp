#include <iostream>
using namespace std;

int main() {
  int a,b,c;


  cout << "Enter three numbers: \n";
  cin >> a >> b >> c;
  int small, middle, bigger;

    if(a <= b && a <= c)
    {
        small = a;
        cout << a << endl;

        if (b <= c)
        {
            middle = b;
            bigger = c;

            cout << b << endl;
            cout << c << endl;            
        }else{
            middle = c;
            bigger = b;  

            cout << c << endl;
            cout << b << endl;           
        } 

     
    
    }else if(b <= a && b <= c)
    {
        small = b;
        cout << b << endl;

        if (a <= c)
        {
            middle = a;
            bigger = c;

            cout << a << endl;
            cout << c << endl; 
        }else{
            middle = c;
            bigger = a; 
            
            cout << c << endl;
            cout << a << endl;            
        }       
    
    }else{
        small = c;
        cout << c << endl;            

        if(a <= b){
            middle = a;
            bigger = b;

            cout << a << endl;
            cout << b << endl; 
        }
    } 


  return 0;
}
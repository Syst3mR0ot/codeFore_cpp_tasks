#include<iostream>



using namespace std;

int main(){

     char x;

     cout << "Please enter one character : \n";
     cin >> x;

     if (x >='A' && x <='Z'){
        cout<<"ALPHA \n IS CAPITAL";
     }
     else if(x >= 'a' && x <= 'z'){
        cout<<"ALPHA \n IS SMALL";
     }
     else if (x >='0' && x <='9'){
        cout<<"IS DIGIT";
     }
     return 0;
     }


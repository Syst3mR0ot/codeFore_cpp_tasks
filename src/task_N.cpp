#include<iostream>
#include <cctype>


using namespace std;

int main(){

     char x;

     cout << "Please enter one character : \n";
     cin >> x;

     if (x >='A' && x <='Z'){
        cout << (char) tolower(x) << "\n";
     }
     else if(x >= 'a' && x <= 'z'){
        cout << (char) toupper(x) << "\n";
     }
     else {
        cout<<"Wrong Input \n";
     }
     return 0;
     }


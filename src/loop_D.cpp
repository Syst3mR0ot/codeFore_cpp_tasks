#include <iostream>

using namespace std;

int main(){

    for (int i = 1; i <= 9999; i++){
        int num;
        cin >> num;

        if (num  == 1999){
            cout << "Correct \n";
            return 0;
        }else{
            cout << "Wrong \n";
        }
    }


}
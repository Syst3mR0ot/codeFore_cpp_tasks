#include <iostream>

using namespace std;

int main(){

    int count;
    cin >> count;
    for(int i=0; i <= count; i++){
        for(int k=0; k<count-i; k++){
            cout << " ";
        }
        for(int j=0; j <(i*2)-1; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=count; i > 0; i--){
        for(int k=0; k<count-i; k++){
            cout << " ";
        }
        for(int j=0; j <(i*2)-1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
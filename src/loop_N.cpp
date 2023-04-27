#include <iostream>

using namespace std;

int main(){
    char ch;
    cin >> ch;
    int count;
    cin >> count;
    
    int arr[count];

    for(int i=0; i < count; i++){
        cin >> arr[i];
    }

    for(int i=0; i <count; i++){
        for(int j=0; j <arr[i]; j++){
            cout << ch;
        }
        cout << endl;
    }
}
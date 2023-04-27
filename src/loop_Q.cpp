#include <iostream>

using namespace std;

int main(){

    int count;
    cin >> count;

    while (count--)
    {
        string num;
        cin >> num;
        for(int i=num.size()-1; i>=0; i--){
            cout << num[i] << " ";
        }
        cout << endl;
    }
    return 0;
    
}
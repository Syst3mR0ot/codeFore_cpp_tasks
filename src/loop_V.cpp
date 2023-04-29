#include <iostream>

using namespace std;

int main(){
    int count;
    cin >> count;
     int t =1;

    for(int i=0; i < count; i++){
        for(int k=0; k<3; k++){
            cout << t << " ";
            t++;
        }
        cout << "PUM" << endl;
        t++;
    }
    return 0;
}
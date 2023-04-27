#include <iostream>
#include <climits>

using namespace std;

int main(){
    int countNum;
    cin >> countNum;

    while (countNum--){
        int num;
        cin >> num;
        long long fac = 1;

        for (int i = 1; i <= num; i++){
            fac = fac * i;
        }
        cout << fac << endl;
    
    }
    return 0;

}
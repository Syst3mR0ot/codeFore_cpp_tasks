#include <iostream>

using namespace std;

int main(){


    while (true)
    {
        int num1, num2;
        cin >> num1 >> num2;

        if(num1 <=0 || num2 <=0){
            break;
        }
        int maxNum = max(num1,num2);
        int minNum = min(num1, num2);
        int sum = 0;

        for(int i=minNum; i<=maxNum; i++){
            cout << i << " ";
            sum+=i;
        }
        cout << "sum = " << sum << endl;

    }
    return 0;
    
}
#include <iostream>

using namespace std;

int main(){

    int num1 , num2, next=0, divide, total=0;
    bool lucky = false, stop = true;
    cin >> num1 >> num2;

        for (int i = num1; i <= num2; i++){
            divide =i;
            total = i;
            while(divide > 0){
                next = divide % 10;
                divide /= 10;
                if(next ==7 || next ==4){
                    lucky = true;
                    if(divide == 0){
                        stop = false;
                        cout << total << " ";
                    }

                }else{
                lucky = false;
                break;
                }
            }
        }
        if(lucky == false && stop == true){
            cout << -1;
           }
        
    return 0;

}
#include <iostream>

using namespace std;

int main(){
    string num1 ,num2;
    cin >> num1;

    for(int i=num1.size()-1; i>=0; i--){
        num2+=num1[i];
    }
    int res1,res2;
    res1 = stoi(num1);
    res2 = stoi(num2);
    cout << res2 << endl;
    if(res1 == res2){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
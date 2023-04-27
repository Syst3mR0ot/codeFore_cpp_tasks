#include<iostream>

using namespace std;

int main()
{
    int A, B;

    cout << "Please Enter 2 Numbers : \n";
    cin >> A >> B;

    if(A%B == 0 || B%A == 0){
            cout << " multiple \n";

    }else{
            cout << " No multiple \n";
    }

    return 0;
}

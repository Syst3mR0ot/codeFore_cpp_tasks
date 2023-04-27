#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int A,B,C;
    cin >> A >>B>>C;

    auto Max = max({A, B , C});
    auto Min = min({A, B , C});

    cout << "Max number is " << Max << "\n";
    cout << "mini number is " << Min << "\n";


    return 0;
}


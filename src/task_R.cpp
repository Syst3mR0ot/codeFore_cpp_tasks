#include <iostream>
using namespace std;

int main() {
  int max_number;


  cout << "Enter number of all days: \n";
  cin >> max_number;
  
  int years = max_number/365;
  cout << years << " years \n";

  int monthes = max_number-(365*years);
  int count_monthes = monthes/30;
  cout << count_monthes << " monthes \n";

  int days = monthes - (count_monthes*30);
  cout << days << " days \n";


  return 0;
}
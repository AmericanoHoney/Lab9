#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
  double prev,rate,total,pay;
  int i=1;
  cout << "Enter initial loan: ";
  cin >> prev;
  cout << "Enter interest rate per year (%): ";
  cin >> rate;
  cout << "Enter amount you can pay per year: ";
  cin >> pay;

  //use 'setw' to set width of table and 'left' to set left-alignment
  //you can change input argument of 'setw()' to see the effect
  //Try to change from 'left' to 'right' and see the effect
  cout << setw(13) << left << "EndOfYear#"; 
  cout << setw(13) << left << "PrevBalance"; 
  cout << setw(13) << left << "Interest"; 
  cout << setw(13) << left << "Total";
  cout << setw(13) << left << "Payment";
  cout << setw(13) << left << "NewBalance";
  cout << "\n";

  //use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
  //you can change input argument of 'setprecision()' to see the effect
  // cout << fixed << setprecision(2); 
  // cout << setw(13) << left << 1; 
  // cout << setw(13) << left << 1000.0;
  // cout << setw(13) << left << 50.0;
  // cout << setw(13) << left << 1050.0;
  // cout << setw(13) << left << 100.0;
  // cout << setw(13) << left << 950.0;
  // cout << "\n";	
  cout << fixed << setprecision(2); 
  while (prev!=0)
  {
    cout << setw(13) << left << i; 
    cout << setw(13) << left << prev;
    cout << setw(13) << left << prev*rate/100;
    total = prev + prev*rate/100;
    cout << setw(13) << left << total;
    if (total<pay)
      pay=total;
    cout << setw(13) << left << pay;
    prev=total-pay;
    cout << setw(13) << left << prev;
    cout << "\n";	
    i++;
  }
  return 0;
}

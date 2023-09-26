//  Alphanzo Moore

// CIS-5 Online

// August 31, 2023

// Assignment 2D: Recreate the find the Hypotenuse demo

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  
  double a;
  double b; 
  double c;
  
  cout << "Enter the lendth of side a";
  cin >> a;
    cout << "Enter the lendth of side b";
  cin >> b;
  c = sqrt(pow(a, 2.0) + pow(b, 2.0));
  cout << "The length of the hypotenuse is" << setw(8);
  cout << setprecision(3) << c << endl;
}
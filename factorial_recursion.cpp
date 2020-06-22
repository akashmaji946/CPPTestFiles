/*
Date: 22 June 2020
Author: Akash Maji
Program: To find the factorial a given number(not to be large)
*/

#include <iostream>
using namespace std;

int fact(int n){
  // factorial is defined for +ve numbers only
  if(n < 0) return -1;
  else if(n == 0) return 1;
  else return n * fact(n-1);

}

int main() {
  std::cout << "Hello World!\n";
  int number;
  cout << "Enter a number:";
  cin >> number;
  cout << fact(number);
  cout << endl;
  return 0;

}
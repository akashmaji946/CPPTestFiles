/*
Date: 22 June 2020
Author: Akash Maji
Program: To find the power of a given number(not to be large)to a given power
*/

#include<iostream>
using namespace std;

long long int raiseTo(int n, int p){
  if(p == 0) return 1;
  else return n * raiseTo(n, p-1);
}

int main(){
  int number, power;
  cout << "Enter number and its power:";
  cin >> number >> power;
  cout << raiseTo(number, power);
  cout << endl;
  return 0;
}
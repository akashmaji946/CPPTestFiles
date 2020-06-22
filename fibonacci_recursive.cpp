/*
Date: 22 June 2020
Author: Akash Maji
Program: To find the fibonacci sequence number of a given idex(not to be large)
*/

#include<iostream>
using namespace std;

int fibb(int n){
  if(n == 0){
    return 0;
  }
  else if(n == 1){
    return 1;
  }
  else{
    return fibb(n-1) + fibb(n-2);
  }
}

int main(){

  cout << "Enter the position: ";
  int n;
  cin >> n;
  cout << fibb(n);
  cout << endl;
  return 0;

}
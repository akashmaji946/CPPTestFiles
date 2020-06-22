#include<iostream>
using namespace std;

void printNumFrom(int n){

  if(n == 0) return;

  if(n < 1) {cout << "Enter positive number"; return; }
  
  cout << n << " ";
  printNumFrom(n-1);
}

void printNumTo(int n){

  if(n == 0) return;
  
  if(n < 1) {cout << "Enter positive number"; return; }

  printNumTo(n-1);
  cout << n << " ";
}

int main(){
  cout << "Enter the positive number: ";
  int num = 0;
  cin >> num;
  printNumFrom(num);
  cout << endl;
  printNumTo(num);
  cout << endl;
  return 0;
}
//Akash Maji
//7 Aug 2020

#include <iostream>
using namespace std;

int main(void){


   // integers
	int i = 10;
	int j = 20;

	int* ptr = &i;
	cout << ptr << endl;
  cout << sizeof ptr << endl;
	//reassignment
	ptr = &j;
	cout << ptr << endl;
  cout << sizeof ptr << endl;


  //char pointer
  char ch = 'B';
  char* c_ptr = &ch;
  cout << (void*) c_ptr << endl;
  cout << sizeof(c_ptr) << endl;

	return 0;

}
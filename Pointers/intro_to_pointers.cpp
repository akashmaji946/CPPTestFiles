//Akash Maji
//7 Aug 2020

#include <iostream>
using namespace std;

int main(void){


   // integers
	int i = 10;
	int* p_i = &i;
	cout << (&i) << endl;
	cout << p_i  << endl;

	// floats and doubles
	float f = 10.12f;
	float* p_f = &f;
	cout << (&f) << endl;
	cout << p_f << endl;


	// doesnot work for characters:
	// prints all characters till '\0' is reached

	char ch = 'B';
	char* p_ch = &ch;
	cout << (&ch) << endl;
	cout << p_ch << endl;
    

    // to get character address typecasting is needed
    cout << (void*)p_ch << endl;
  
  return 0;
}

/*
0x61ff00
0x61ff00
0x61fefc
0x61fefc
Bàδ!A

Bàδ!A

0x61fefb
*/
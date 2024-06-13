#include <stdio.h>
#include <iostream>
using namespace std ;
int main ()
{
	int x ;
	cout << " Bytes for int = " << sizeof(int) << endl ;
	cout <<" Bytes for long int = " << sizeof(long int) << endl ;
	cout <<" Bytes for short int = " << sizeof(short int) << endl ;
	cout << " Bytes for float = " << sizeof(float) << endl ;
	cout << " Bytes for double = " << sizeof(double) << endl ;
	cout << " Bytes for long double = " << sizeof(long double) << endl ;
	cout << " Bytes for char = " << sizeof(char) << endl ;
	cout << " Bytes for bool = " << sizeof(bool) << endl ;
	return (0);
}
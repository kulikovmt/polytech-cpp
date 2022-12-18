
#include <iostream>

using namespace std;


int main()
{
	int var = 123; 
	int* ptrvar = &var;
	cout << "*ptrvar = " << *ptrvar << endl;
	cout << "ptrvar = " << ptrvar << endl;
	*ptrvar = 124;
	cout << "*ptrvar = " << *ptrvar << endl;
	cout << "var = " << var << endl;
	int arr[3] = { 1, 3, 6 };
	int* f = arr;
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "Array[" << i << "] = " << *(f+i) << endl;
	}
	i = 100;
	int* const P = &i;
	*P = 987;
	cout << "P = " << *P << endl;
}

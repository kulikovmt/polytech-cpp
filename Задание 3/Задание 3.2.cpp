
#include <iostream>


using namespace std;

void  SummArray(int* arr, int* summ, int size)
{

	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}

	cout << "SumArray: " << *summ << endl;

}

void Summ(int* x, int* y)
{
	int sum = 0;
	sum = (*x + *y);
	cout << "Sum: " << sum << endl;

}

void Difference(int* x, int* y)
{
	int diff = 0;
	diff = (*x - *y);
	cout << "Difference: " << diff << endl;

}

void Char(char* z, int* ykazX, int* ykazY)
{
	if (*z == 43)
	{
		Summ(ykazX, ykazY);
	}
	if (*z == 45)
	{
		Difference(ykazX, ykazY);
	}
}

int main()
{
	const int size = 5;
	int arr[size] = { 3,5,3,2,5 };
	int summ = 0;
	int* psumm = &summ;
	int* pa = &arr[0];
	int* po = &arr[4];
	SummArray(pa, psumm, size);

	int x = 4;
	int y = 8;
	int* ykazX = &x;
	int* ykazY = &y;
	char z = 45;
	Char(&z, ykazX, ykazY);

	float* f = new float[3];
	cout << f << endl;
	delete[] f;



}

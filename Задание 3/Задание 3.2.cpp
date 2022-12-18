#include <iostream>


using namespace std;

void  SummArray(int* begin, int* end)
{
	int summ = 0;
	for (int* i = begin; i < end; i++)
	{
		summ += *i ;
		
	}
	cout << summ << endl;

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
	if (*z == '+')
	{
		Summ(ykazX, ykazY);
	}
	if (*z == '-')
	{
		Difference(ykazX, ykazY);
	}
}

int main()
{
	int arr[5] = { 3,5,3,2,5 };
	int summ = 0;
	int* psumm = &summ;
	int* begin = &arr[0];
	int* end = &arr[5];
	SummArray(begin, end);

	int x = 4;
	int y = 8;
	int* ykazX = &x;
	int* ykazY = &y;
	char z = '+';
	Char(&z, ykazX, ykazY);

	float* f = new float(1.5);
	cout << *f << endl;
	delete f;
}

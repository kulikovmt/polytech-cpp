

#include <iostream>

using namespace std;

void SummPologChisla(int x)
{

	int i;
	int sum = 0;
	if (x <= 0)
	{
		cout << "0" << endl;
	}
	if (x > 0)
	{
		for (i = 0; i <= x; i++)
		{
			sum = sum + i;
		}
		cout << sum << endl;
	}

}

void Znacheniya(int n, int m, int revn, int revm)
{
	revn = n + m;
	revm = n * m;
	cout << "n = " << n << " m = " << m << " revn = " << revn << " revm = " << revm << endl;
}


int main()
{
	int x = 3;
	SummPologChisla(x);
	int n = 2;
	int m = 5;
	int& revn = n;
	int& revm = m;
	Znacheniya(n, m, revn, revm);
	float z = 0.432;
	cout << "z = " << z << endl;
	int k = 0;
	while (k < 3)
	{
		k++;
		cout << z << endl;
		int f = 8;
		cout << f << endl;

	}
}

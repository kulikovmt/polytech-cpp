

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
	int i = 0;
	int a = 0;
	int sum = 0;
	int DwumerArr[2][3] = { {1,5,9},{3,6,2} };
	for (i = 0; i < 2; i++)
	{
		for (a = 0; a < 3; a++)
		{
			sum = sum + DwumerArr[i][a];
		}

	}
	cout << "SUM = " << sum << endl;

	int OdnomerArr[3] = { DwumerArr[0][0] + DwumerArr[1][0], DwumerArr[0][1] + DwumerArr[1][1], DwumerArr[0][2] + DwumerArr[1][2] };
	cout << "Odnomernyi massiv:" << endl;
	for (i = 0; i < 3; i++)
	{
		cout << "Array[" << i << "] = " << OdnomerArr[i] << endl;
	}
	float g = 20.84;
	float& revg1 = g;
	float& revg2 = g;
	revg2 = 21.84;
	cout << g << "\n" << revg1 << "\n" << revg2 << endl;



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


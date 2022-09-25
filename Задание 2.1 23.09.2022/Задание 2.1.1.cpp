

#include <iostream>

using namespace std;



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
}

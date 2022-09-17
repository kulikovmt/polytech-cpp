

#include <iostream>
using namespace std;



int main()
{

	int x = 7;
	int y = 10;
	int z = 4;
	int sum = x + y + z;
	int raz = x - y - z;
	int prz = x * y * z;
	float del = float(x) / y / z;
	float ost = x % y;
	int m1 = 3;
	int m2 = 7;
	int rez1 = m1 & m2;
	int rez2 = m1 | m2;
	int rez3 = m1 ^ m2;
	int bit1 = ~x;
	int bit2 = x >> 1;
	int bit3 = x << 1;
	bool t = true;
	bool f = false;
	bool o = true && (t && (t && t || f) && (f || t != f));




	cout << "ost = " << ost << " sum = " << sum << " raz = " << raz << " del = " << del << " ost = " << ost << endl;
	cout << "Vrjn = " << (((145 - 100 / 20) / 20) * 50) + 45 << endl;
	cout << "rez1 = " << rez1 << " rez2 = " << rez2 << " rez3 = " << rez3 << endl;
	cout << "bit1 = " << bit1 << " bit2 = " << bit2 << " bit3 = " << bit3 << endl;
	cout << "o = " << o << endl;
	cout << "Log vrg = " << (25 < 48 && (23 > (3 + 15) || (2 < 8 && (5 >= 2 && 15 < 15)))) << endl;
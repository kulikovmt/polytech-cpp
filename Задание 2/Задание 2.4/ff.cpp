#include <iostream>
using namespace std;
#include "ff.h"
void frrgt(int x)
{
	static int y = 7;
	cout << x + y << endl;
	y = x;

}

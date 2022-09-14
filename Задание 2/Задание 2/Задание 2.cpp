
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 150;
    float y = 15.933;
    short v = 250;
    string month = "Июнь";
    int day = 2;
    int year = 2003;
    const float m = 2.3;
    const string w = "Windows";



    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "v = " << v << "\n";
    cout << "Моя дата рождения: " << day << " " << month << " " << year << "\n";
    cout << "Константы: " << m << " " << w << "\n";
}
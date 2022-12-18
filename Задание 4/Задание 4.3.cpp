
#include <string>
#include <iostream>

#include "Gun.hpp"

using namespace std;

int main()
{
    Gun G_1("Ak-47", 100, 7);
    cout << "Name: " << G_1.name << "\n Damage: " << G_1.damage << "\n Weight: " << G_1.weight << endl;


    Gun G_2;

    Gun* G_3 = new Gun("AWP", 200, 12);

    cout << "Allowable weight: " << (G_1.MaxWeight(10) ? "Yes" : "No") << endl;
    cout << "Equipment weight (+10kg) " << G_1.SumWeight(10) << endl;
    cout << "Weight of AK-47 and AWP is " << G_1.SumWeight(*G_3) << endl << endl;

    delete G_3;

}

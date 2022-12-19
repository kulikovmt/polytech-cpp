
#include <iostream>

#include "Characteristic.hpp"
#include "Gun.hpp"
#include "MyMath.hpp"

using namespace std;

int main()
{
    
    Gun G_1("Ak-47", 100, 7);
    Gun G_2;

    Gun* G_3 = new Gun("AWP", 200, 12);

    cout << "AK-47 name: " << G_1.getName() << endl;
    cout << "AK-47 weight: " << G_1.getWeight() << endl;
    cout << "AK-47 damage: " << G_1.getDamage() << endl;

    cout << "Allowable weight: " << (G_1.MaxWeight(10) ? "Yes" : "No") << endl;
    cout << "Equipment weight (+10kg) " << G_1.SumWeight(10) << endl;
    cout << "Weight of AK-47 and AWP is " << G_1.SumWeight(*G_3) << endl;

    G_1.setDamage(31);
    cout << "AK-47 damage: " << G_1.getDamage() << endl;

    Characteristic G_1Characteristic(10);
    cout << "AK-47 characteristic is " << G_1Characteristic.getDamage(G_1) << endl<<endl;

    cout << "MyMath: 5 + 2 = " << MyMath::add(1, 2) << endl;
    cout << "MyMath: 5 - 2 = " << MyMath::sub(1, 2) << endl;
    cout << "MyMath: 5 * 2 = " << MyMath::mult(1, 2) << endl;
    cout << "MyMath: 6 / 2 = " << MyMath::div(1, 2) << endl;

    cout << MyMath::callsCount << " calls in MyMath" << endl<<endl;

    delete G_3;

}

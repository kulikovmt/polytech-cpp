
#include <string>
#include <iostream>
using namespace std;

class Gun {
public:
    string name;

    float damage;

    float weight;



    Gun() {

        this->name = "NoName";

        this->damage = 0;

        this->weight = 0;

    }

    Gun(string name, float damage, float weight) : Gun() {

        this->name = name;

        this->damage = damage;

        this->weight = weight;

    }

    ~Gun() {
        cout << "Name: " << name << "\n Damage: " << damage << "\n Weight: " << weight << endl;
        cout << "\n" << "----------Delete Gun Information----------" << "\n" << endl;

    }

    bool MaxWeight(float maxWeight) {
        return maxWeight >= this->weight;
    }

    float SumWeight(float loadWeight) {
        return this->weight + loadWeight;
    }

    float SumWeight(Gun& gun) {
        return SumWeight(gun.weight);
    }
};


int main()
{
    Gun G_1("Ak-47", 100, 7);
    cout << "Name: " << G_1.name << "\n Damage: " << G_1.damage << "\n Weight: " << G_1.weight << endl;


    Gun G_2;

    Gun* G_3 = new Gun("AWP", 200, 12);

    cout << "Allowable weight: " << (G_1.MaxWeight(10) ? "True" : "False") << endl;
    cout << "Equipment weight (+10kg) " << G_1.SumWeight(10) << endl;
    cout << "Weight of AK-47 and AWP is " << G_1.SumWeight(*G_3) << endl << endl;

    delete G_3;

}

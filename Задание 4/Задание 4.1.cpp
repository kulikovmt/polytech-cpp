

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

    Gun(string name, float damage, float weight, float MaxWeight) : Gun() {

        this->name = name;

        this->damage = damage;

        this->weight = weight;

    }

    void Print() {

        cout << "Name:\t " << name << "\nDamage:\t " << damage << "\nWeight:\t " << weight << endl;
    }

};



int main()
{
    Gun G_1("Ak-47", 100, 7, 20);
    Gun G_2;
    G_1.Print();
    G_2.Print();
};

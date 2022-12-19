
#include <string>
#include <iostream>
#include "Characteristic.hpp"
using namespace std;

class Gun {
    friend class Characteristic;
private:
    string name;

    float damage;

    float weight;


public:
    Gun();

    Gun(string, float, float);

public:

    ~Gun();

public:
    string getName();

    float getWeight();

    float getDamage();

public:

    void setDamage(float);

public:

    bool MaxWeight(float);

    float SumWeight(float);

    float SumWeight(Gun&);
};
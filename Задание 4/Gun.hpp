
#include <string>
#include <iostream>

using namespace std;

class Gun {
    
private:
    string name;

    float damage;

    float weight;
friend class Characteristic;

public:
    Gun();

    Gun(string, float, float);

    ~Gun();

public:

    string getTitle();

    float getWeight();

    float getDamage();

public:

    void setDamage(float);

public:
    bool MaxWeight(float);

    float SumWeight(float);

    float SumWeight(Gun&);
};
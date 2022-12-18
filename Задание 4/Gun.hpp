
#include <string>
#include <iostream>

using namespace std;

class Gun {
public:
    string name;

    float damage;

    float weight;



    Gun();

    Gun(string, float, float);

    ~Gun();

    bool MaxWeight(float);

    float SumWeight(float);

    float SumWeight(Gun&);
};

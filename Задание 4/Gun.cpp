
#include "Gun.hpp"

    Gun::Gun() {

        this->name = "NoName";

        this->damage = 0;

        this->weight = 0;

    }

    Gun::Gun(string name, float damage, float weight) : Gun() {

        this->name = name;

        this->damage = damage;

        this->weight = weight;

    }

    Gun::~Gun() {
        cout << "Name: " << name << "\n Damage: " << damage << "\n Weight: " << weight << endl;
        cout << "\n" << "----------Delete Gun Information----------" << "\n" << endl;

    }
    string Gun::getName() {
        return this->name;
    }

    float Gun::getWeight() {
        return this->weight;
    }

    float Gun::getDamage() {
        return this->damage;
    }

    void Gun::setDamage(float damage) {
        this->damage = damage;;
    }

    bool Gun::MaxWeight(float maxWeight) {
        return maxWeight >= this->weight;
    }

    float Gun::SumWeight(float loadWeight) {
        return this->weight + loadWeight;
    }

    float Gun::SumWeight(Gun& gun) {
        return SumWeight(gun.weight);
    }
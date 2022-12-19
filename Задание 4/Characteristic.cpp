#include "Characteristic.hpp"
#include "Gun.hpp"

Characteristic::Characteristic(float power) : power(power) {}


float Characteristic::getDamage(Gun& gun) {
	return this->power + gun.damage;
}
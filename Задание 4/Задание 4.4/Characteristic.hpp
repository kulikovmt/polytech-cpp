#pragma once

class Gun;

class Characteristic {
private:
	float power;

public:
	Characteristic(float);

public:
	// #7
	float getDamage(Gun&);
};
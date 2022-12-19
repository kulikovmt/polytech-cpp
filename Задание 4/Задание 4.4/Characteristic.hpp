#pragma once

class Gun;

class Characteristic {
private:
	float power;

public:
	Characteristic(float);

public:
	float getDamage(Gun&);
};

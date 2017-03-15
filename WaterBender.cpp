// WaterBender.cpp

#include "WaterBender.h"

// Constructor.

WaterBender::WaterBender(string name, int HP, int force, int luck) : Bender(name, HP, force, luck) {
	this -> name = name;
	this -> HP = HP;
	this -> force = force;
	this -> luck = luck;
}

// Ataques.

void WaterBender::regularAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;

	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	bender -> setHP(hp - (this -> force + newSmash - this -> defend(bender)));
}

void WaterBender::specialAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;
	
	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	if (typeid(*bender) == typeid(FireBender)) {
		bender -> setHP(hp - (newSmash + this -> offense(bender) * 1.25));
	} else {
		bender -> setHP(hp - this -> offense(bender));
	}
}

int WaterBender::offense(Bender* bender) {
	return bender -> getForce() * 0.25;
}

int WaterBender::defend(Bender* bender) {
	return bender -> getForce() * 0.25;
}

// Destructor.

WaterBender::~WaterBender() {
	
}
	// AirBender.cpp

#include "AirBender.h"

// Constructor.

AirBender::AirBender(string name, int HP, int force, int luck) : Bender(name, HP, force, luck) {
	this -> name = name;
	this -> HP = HP;
	this -> force = force;
	this -> luck = luck;
}

// Ataques.

void AirBender::regularAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;

	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	bender -> setHP(hp - (this -> force + newSmash - this -> defend(bender)));
}

void AirBender::specialAttack(Bender* bender) {
	int hp = bender -> getHP();
	
	if (typeid(*bender) == typeid(EarthBender)) {
		bender -> setHP(hp - this -> offense(bender) * 1.25);
	} else {
		bender -> setHP(hp - this -> offense(bender));
	}
}

int AirBender::offense(Bender* bender) {
	return bender -> getForce() * 0.25;
}

int AirBender::defend(Bender* bender) {
	return bender -> getForce() * 0.25;
}

// Destructor.

AirBender::~AirBender() {
	
}
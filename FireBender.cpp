// FireBender.cpp

#include "FireBender.h"

// Constructor.

FireBender::FireBender(string name, int HP, int force, int luck) : Bender(name, HP, force, luck) {
	this -> name = name;
	this -> HP = HP;
	this -> force = force;
	this -> luck = luck;
}

// Ataques.

void FireBender::regularAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;

	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	bender -> setHP(hp - (this -> force + newSmash - this -> defend(bender)));
}

void FireBender::specialAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;
	
	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	if (typeid(*bender) == typeid(AirBender)) {
		bender -> setHP(hp - (newSmash + this -> offense(bender) * 1.15));
	} else {
		bender -> setHP(hp - this -> offense(bender));
	}
}

int FireBender::offense(Bender* bender) {
	return bender -> getForce() * 0.25;
}

int FireBender::defend(Bender* bender) {
	return bender -> getForce() * 0.25;
}

// Destructor.

FireBender::~FireBender() {
	
}
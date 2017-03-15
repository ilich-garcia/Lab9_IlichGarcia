// EarthBender.cpp

#include "EarthBender.h"

// Constructor.

EarthBender::EarthBender(string name, int HP, int force, int luck) : Bender(name, HP, force, luck) {
	this -> name = name;
	this -> HP = HP;
	this -> force = force;
	this -> luck = luck;
}

// Ataques.

void EarthBender::regularAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;

	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	bender -> setHP(hp - (this -> force + newSmash - this -> defend(bender)));
}

void EarthBender::specialAttack(Bender* bender) {
	int hp = bender -> getHP();
	int newSmash;
	
	if (smash()) {
		newSmash = this -> force * 0.5;
	}

	if (typeid(*bender) == typeid(WaterBender)) {
		bender -> setHP(hp - (newSmash + this -> offense(bender) * 1.25));
	} else {
		bender -> setHP(hp - this -> offense(bender));
	}
}

int EarthBender::offense(Bender* bender) {
	return bender -> getForce() * 0.25;
}

int EarthBender::defend(Bender* bender) {
	return bender -> getForce() * 0.25;
}

// Destructor.

EarthBender::~EarthBender() {
	
}
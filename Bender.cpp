// Bender.cpp

#include "Bender.h"

// Constructor.

Bender::Bender(string name, int HP, int force, int luck) {
	this -> name = name;
	this -> HP = HP;
	this -> force = force;
	this -> luck = luck;
}

// Setters.

void Bender::setName(string name) {
	this -> name = name;
}

void Bender::setHP(int HP) {
	this -> HP = HP;
}

void Bender::setForce(int force) {
	this -> force = force;
}

void Bender::setLuck(int luck) {
	this -> luck = luck;
}

// Getters.

string Bender::getName() {
	return name;
}

int Bender::getHP() {
	return HP;
}

int Bender::getForce() {
	return force;
}

int Bender::getLuck() {
	return luck;
}

// Destructor.

Bender::~Bender() {

}

// Smash.

bool Bender::smash() {
	int random;
	int newLuck = this -> luck;

	srand(time(NULL));

	if (newLuck >= 0 && newLuck <= 5) {
		random = rand() % 1000 + 1;

		if (random == 50) {
			return true;
		}
	} else if (newLuck >= 6 && newLuck <= 9) {
		random = rand() % 100 + 1;

		if (random % 5 == 0) {
			return true;
		}
	} else if (newLuck == 10) {
		random = rand() % 10 + 1;

		if (random % 3 == 0) {
			return true;
		}
	}

	return false;
}
// Bender.h

#pragma once

#include <string>
#include <iostream>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Bender {
	protected:
		string name;
		int HP;
		int force;
		int luck;

	public:
		// Constructor.
		Bender(string, int, int, int);
		// Setters.
		/*virtual*/ void setName(string);
		/*virtual*/ void setHP(int);
		/*virtual*/ void setForce(int);
		/*virtual*/ void setLuck(int);
		// Getters.
		/*virtual*/ string getName();
		/*virtual*/ int getHP();
		/*virtual*/ int getForce();
		/*virtual*/ int getLuck();
		// Destructor.
		~Bender();
		// Ataques.
		virtual void regularAttack(Bender*) = 0;
		virtual void specialAttack(Bender*) = 0;
		virtual int offense(Bender*) = 0;
		virtual int defend(Bender*) = 0;
		// Smash.
		bool smash();
};
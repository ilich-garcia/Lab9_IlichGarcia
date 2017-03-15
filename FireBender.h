// FireBender.h

#pragma once

#include "Bender.h"
#include "AirBender.h"

class FireBender : public Bender {
	public:
		// Constructor.
		FireBender(string, int, int, int);
		// Ataques.
		void regularAttack(Bender*);
		void specialAttack(Bender*);
		int offense(Bender*);
		int defend(Bender*);
		// Destructor.
		~FireBender();
};
// AirBender.h

#pragma once

#include "Bender.h"
#include "EarthBender.h"

class AirBender : public Bender {
	public:
		// Constructor.
		AirBender(string, int, int, int);
		// Ataques.
		void regularAttack(Bender*);
		void specialAttack(Bender*);
		int offense(Bender*);
		int defend(Bender*);
		// Destructor.
		~AirBender();
};
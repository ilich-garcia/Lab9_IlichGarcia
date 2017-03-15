// EarthBender.h

#pragma once

#include "Bender.h"
#include "WaterBender.h"

class EarthBender : public Bender {
	public:
		// Constructor.
		EarthBender(string, int, int, int);
		// Ataques.
		void regularAttack(Bender*);
		void specialAttack(Bender*);
		int offense(Bender*);
		int defend(Bender*);
		// Destructor.
		~EarthBender();
};
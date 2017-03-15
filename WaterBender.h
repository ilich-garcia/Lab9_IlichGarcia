// WaterBender.h

#pragma once

#include "Bender.h"
#include "FireBender.h"

class WaterBender : public Bender {
	public:
		// Constructor.
		WaterBender(string, int, int, int);
		// Ataques.
		void regularAttack(Bender*);
		void specialAttack(Bender*);
		int offense(Bender*);
		int defend(Bender*);
		// Destructor.
		~WaterBender();
};
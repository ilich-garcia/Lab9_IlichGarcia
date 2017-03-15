// main.cpp

#include "Bender.h"
#include "AirBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "FireBender.h"
#include <stdlib.h>
#include <vector>

// Random.

int getRandom();

int main() {
	int option;
	vector<Bender*> benders;

	do {
		string name;
		int HP, force, luck;

		cout << "1) Air Bender. \n2) Earth Bender. \n3) Water Bender. \n4) Fire Bender. \n5) Simulación. \n6) Salir. \nOpción: ";
		cin >> option;

		if (option == 1) { // Air Bender.
			cout << "\nIngrese nombre: ";
			cin >> name;
			cout << "Ingrese HP: ";
			cin >> HP;
			cout << "Ingrese force: ";
			cin >> force;
			cout << "Ingrese luck: ";
			cin >> luck;

			AirBender* air = new AirBender(name, HP, force, luck);
			benders.push_back(air);
		} else if (option == 2) { // Earth Bender.
			cout << "\nIngrese nombre: ";
			cin >> name;
			cout << "Ingrese HP: ";
			cin >> HP;
			cout << "Ingrese force: ";
			cin >> force;
			cout << "Ingrese luck: ";
			cin >> luck;

			EarthBender* earth = new EarthBender(name, HP, force, luck);
			benders.push_back(earth);
		} else if (option == 3) { // Water Bender.
			cout << "\nIngrese nombre: ";
			cin >> name;
			cout << "Ingrese HP: ";
			cin >> HP;
			cout << "Ingrese force: ";
			cin >> force;
			cout << "Ingrese luck: ";
			cin >> luck;

			WaterBender* water = new WaterBender(name, HP, force, luck);
			benders.push_back(water);
		} else if (option == 4) { // Fire Bender.
			cout << "\nIngrese nombre: ";
			cin >> name;
			cout << "Ingrese HP: ";
			cin >> HP;
			cout << "Ingrese force: ";
			cin >> force;
			cout << "Ingrese luck: ";
			cin >> luck;

			FireBender* fire = new FireBender(name, HP, force, luck);
			benders.push_back(fire);
		} else if (option == 5) { // Simulación.
			int position, secondOption;

			for (int i = 0; i < benders.size(); ++i) {
				Bender* bender = benders.at(i);

				cout << "Tipo de Bender: " << typeid(*bender).name() << endl;
				cout << "Nombre: " << bender -> getName() << endl;
				cout << "HP: " << bender -> getHP() << endl;
				cout << "Fuerza: " << bender -> getForce() << endl;
				cout << "Luck: " << bender -> getLuck() << endl;
			}

			cout << "\nIngrese índice del primer Bender: ";
			cin >> position;

			Bender* bender1 = benders.at(position);

			cout << "Ingrese índice del segundo Bender: ";
			cin >> position;

			Bender* bender2 = benders.at(position);

			do {
				int turn = 0;

				cout << "\n1) Ataque Regular. \n2) Ataque Especial. \n3) Salir. \nOpción: ";
				cin >> secondOption;

				if (turn % 2 == 0) {
					cout << "Turno del jugador 1!" << endl;
					
					if (secondOption == 1) {
						bender1 -> regularAttack(bender2);
					} else if (secondOption == 2) {
						bender1 -> specialAttack(bender2);
					}

					cout << "HP: " << bender2 -> getHP() << endl;
				} else {
					cout << "Turno del jugador 2!" << endl;

					if (secondOption == 1) {
						bender2 -> regularAttack(bender1);
					} else if (secondOption == 2) {
						bender2 -> specialAttack(bender1);
					}

					cout << "HP: " << bender2 -> getHP() << endl;
				}

				turn++;
			} while (secondOption != 3);
		}
	} while (option != 6);

	return 0;
}


int getRandom() {
	int random;

	srand(time(NULL));

	random = rand() % 7 + 1;

	return random;
}
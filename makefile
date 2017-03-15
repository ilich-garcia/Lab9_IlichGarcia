main:	main.o Bender.o AirBender.o EarthBender.o WaterBender.o FireBender.o
	g++ main.o Bender.o AirBender.o EarthBender.o WaterBender.o FireBender.o -o main

main.o:	main.cpp Bender.h AirBender.h EarthBender.h WaterBender.h FireBender.h
	g++ -c main.cpp

AirBender.o:	AirBender.cpp AirBender.h
	g++ -c AirBender.cpp

EarthBender.o:	EarthBender.cpp EarthBender.h Bender.h
	g++ -c EarthBender.cpp

WaterBender.o:	WaterBender.cpp WaterBender.h Bender.h
	g++ -c WaterBender.cpp

FireBender.o:	FireBender.cpp FireBender.h Bender.h
	g++ -c FireBender.cpp
	
Bender.o:	Bender.cpp Bender.h
	g++ -c Bender.cpp
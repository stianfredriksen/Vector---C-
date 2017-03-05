#pragma once
#include <iostream>
#include <ostream>
class Punkt
{
public:
	Punkt();
	~Punkt();

	void lagPunkt(int x, int y, int z);

	int getX1();
	int getY1();
	int getZ1();

	//Bruker friend for at utskriften av punkt skal fungere.
	friend std::ostream &operator<<(std::ostream &stream, Punkt p);


private:
	int xKord = 0;	// Setter punktene til default 0, origo.
	int yKord = 0;
	int zKord = 0; 

};


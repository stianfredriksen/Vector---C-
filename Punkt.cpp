#include "stdafx.h"
#include "Punkt.h"
#include <iostream>
#include <ostream>


Punkt::Punkt()
{
}


Punkt::~Punkt()
{
}

// funksjon for oppretting av punkt. 
void Punkt::lagPunkt(int x, int y, int z){
	xKord = x;
	yKord = y;
	zKord = z;
}

// Lager get-funksjoner.
int Punkt::getX1(){
	return xKord;
}

int Punkt::getY1(){
	return yKord;
}

int Punkt::getZ1(){
	return zKord;
}

// Overloader opertoren "<<" slik at vi kan skrive ut et punkt direkte.
std::ostream &operator<<(std::ostream &stream, Punkt p) {
	stream << "(" << p.getX1() << "," << p.getY1() << "," << p.getZ1() << ")";
	return stream;
}
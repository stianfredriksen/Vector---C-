#include "stdafx.h"
#include "Linje.h"


Linje::Linje()
{
}

Linje::~Linje()
{
}

Punkt Linje::getP1(){
	return p1;
}

Punkt Linje::getP2(){
	return p2;
}

void Linje::setP1(Punkt a){
	p1 = a;
}

void Linje::setP2(Punkt b){
	p2 = b;
}

// Overloader operatoren + slik at vi kan plusse sammen to punkter til en linje. 
// Bruker de set-funksjonene jeg har laget for å få det til. 
Linje operator+(Punkt a, Punkt b) {
	Linje l;
	l.setP1(a);
	l.setP2(b);

	return l;
}

// Overloader operatoren << slik som jeg gjorde i punkt slik at vi kan skrive ut linje ved hjelp av operatorer.
std::ostream &operator<<(std::ostream &stream, Linje l) {
	stream << "Linja går fra punktet: " << l.p1 << " til: " << l.p2;
	return stream;
}
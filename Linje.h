#pragma once
#include "Punkt.h"
#include <iostream>
class Linje
{
public:
	Linje();
	~Linje();

	// Lager to get-funksjoner med returverdi Punkt:
	Punkt getP1();
	Punkt getP2();

	// Lager to set-funksjoner
	void setP1(Punkt p);
	void setP2(Punkt p);

	//Bruker en friend slik at vi får tilgang til det vi trenger for å skrive ut en linje.
	friend std::ostream &operator<<(std::ostream &stream, Linje l); 

private:
	Punkt p1, p2; // Velger at linje skal bestå av to punkter. Da kan vi bruke punktobjekter. 
};

Linje operator+(Punkt p, Punkt p1);
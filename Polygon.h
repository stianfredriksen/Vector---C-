#pragma once
#include <ostream>
#include "Linje.h"
#include "Punkt.h"
#include <vector>
class Polygon
{
public:
	Polygon();
	~Polygon();

	// Lager funksjoner for å legge til elementer til polygonet.
	void add(Punkt p);
	void add(Linje l);
	void add(Polygon pol);

	friend std::ostream &operator<<(std::ostream &stream, Polygon poly);
	
private:
	std::vector<Punkt> punkter; // Lager en vector for å lagre alle punktene i polygonet.
};


//Lager overload-funksjoner for + til de forskjellige tilfellene vi kan legge til på polygonet.
// trenger ikke lage for Punkt + punkt fordi det er en linje.
Polygon operator+(Punkt, Linje);
Polygon operator+(Punkt, Polygon);
Polygon operator+(Linje, Punkt);
Polygon operator+(Linje, Linje);
Polygon operator+(Linje, Polygon);
Polygon operator+(Polygon, Punkt);
Polygon operator+(Polygon, Linje);
Polygon operator+(Polygon, Polygon);
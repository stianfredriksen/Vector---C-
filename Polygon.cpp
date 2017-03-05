#include "stdafx.h"
#include "Polygon.h"


Polygon::Polygon()
{
}


Polygon::~Polygon()
{
}

//Bruker vector for � legge til punkter p� polygonet.
void Polygon::add(Punkt p){
	punkter.push_back(p);
}

// Vi m� hente ut punktene i linja for � legge de til p� polygonet.
void Polygon::add(Linje l){
	punkter.push_back(l.getP1());
	punkter.push_back(l.getP2());
}

// Bruker en for-setning for � l�pe igjennom alle punktene som finnes i polygonet. 
// Da kan jeg legge de til p� det nye polygonet.
void Polygon::add(Polygon pol){
	for (int i = 0; i < pol.punkter.size(); i++)
	{
		punkter.push_back(pol.punkter[i]);
	}
}


// M� igjen overloade << for � skrive ut polygoner.
// Bruker ogs� her en for-l�kke til � l�pe igjennom alle punktene slik at vi f�r skrevet ut alle.
std::ostream &operator<<(std::ostream &stream, Polygon poly) {
	for (int i = 0; i < poly.punkter.size(); i++)
	{
		stream << poly.punkter[i];
	}
	return stream;
}

// Lager alle funksjonene, bruker add-funksjonene jeg har laget fra f�r.
Polygon operator+(Punkt p, Linje l) {
	Polygon po;
	po.add(p);
	po.add(l);
	return po;
}
Polygon operator+(Punkt p, Polygon poly) {
	Polygon po;
	po.add(p);
	po.add(poly);
	return po;
}
Polygon operator+(Linje l, Punkt p) {
	Polygon po;
	po.add(l);
	po.add(p);
	return po;
}
Polygon operator+(Linje l, Linje l1) {
	Polygon po;
	po.add(l);
	po.add(l1);
	return po;
}
Polygon operator+(Linje l, Polygon poly) {
	Polygon po;
	po.add(l);
	po.add(poly);
	return po;
}
Polygon operator+(Polygon poly, Punkt p) {
	Polygon po;
	po.add(poly);
	po.add(p);
	return po;
}
Polygon operator+(Polygon poly, Linje l) {
	Polygon po;
	po.add(poly);
	po.add(l);
	return po;
}
Polygon operator+(Polygon poly1, Polygon poly2) {
	Polygon po;
	po.add(poly1);
	po.add(poly2);
	return po;
}
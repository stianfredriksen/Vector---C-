// ObligatoriskOppgaveC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Punkt.h"
#include "Linje.h"
#include "Polygon.h"
#include <iostream>


int main()
{
	// Et lite testprogram;

	Punkt p1, p2, p3, p4;
	p1.lagPunkt(1, 2, 2);
	p2.lagPunkt(5, 2, 8);
	p3.lagPunkt(21, 25, 33);
	p4.lagPunkt(1, 7, 36);

	std::cout << "Punkt 1 er: " << p1 << std::endl;
	std::cout << "Punkt 2 er: " << p2 << std::endl;
	std::cout << "Punkt 3 er: " << p3 << std::endl;
	std::cout << "Punkt 4 er: " << p4 << std::endl;

	Linje l1, l2, l3, l4;
	l1 = p1 + p2;
	std::cout << l1 << std::endl;
	l2 = p4 + p2;
	std::cout << l2 << std::endl;
	l3 = p3 + p4;
	std::cout << l3 << std::endl;
	l4 = p3 + p1;
	std::cout << l4 << std::endl;
	std::cout << std::endl;

	Polygon poly, poly1;
	poly = l2 + l3 + l4 + p2 + p1;
	poly1 = poly + p1;


	std::cout << "Polygon blir: " << poly << "\n" << std::endl;
	std::cout << "Polygon 2 blir: " << poly1 << std::endl;


	return 0;
}


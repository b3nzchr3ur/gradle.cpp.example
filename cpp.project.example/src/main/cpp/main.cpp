//============================================================================
// Name        : MeetSerie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Meetserie.h"
#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello Meetserie!!!" << endl; // prints !!!Hello World!!!

	Meetserie m("demo");
	
	cout << "Naam = " << m.getNaam() << endl;

	cout << "IsVol = " << (m.isVol() ? "Vol" : "Nog plaats") << endl;

	return 0;
}

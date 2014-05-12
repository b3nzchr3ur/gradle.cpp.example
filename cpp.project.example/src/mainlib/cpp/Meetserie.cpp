/*
 * Meetserie.cpp
 *
 *  Created on: Feb 5, 2013
 *      Author: student
 */

#include <Meetserie.h>

Meetserie::Meetserie(string nm) {
	setNaam(nm);
	count = 0;
}

string Meetserie::getNaam() {
	return naam;
}

void Meetserie::setNaam(string nm) {
	naam = nm;
}

bool Meetserie::isVol() {
	return count == MaxAantalMeetwaarden;
}

void Meetserie::voegToe(int meetw) {
	meetwaarden[count] = meetw;
	count++;
}

bool Meetserie::meetwaardeKomtVoor(int meetw) 
{
	for(int i = 0; i < count; i++) {
		if( meetwaarden[i] == meetw) return true;
	}

	return false;
}

int Meetserie::getMeetwaarde(int i) {
	return meetwaarden[i];
}

void Meetserie::bepAantalMeetwaarden(int &aantal) {
	aantal = count;
}

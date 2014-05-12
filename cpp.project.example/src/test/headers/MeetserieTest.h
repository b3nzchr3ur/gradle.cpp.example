#ifndef MEETSERIETEST_H_
#define MEETSERIETEST_H_

#include <Meetserie.h>
#include <string>
using namespace std;

class MeetserieTest : public ::testing::Test {
public:
	MeetserieTest() : opgegevenNaam("test"), meetserie(opgegevenNaam) { };
protected:
	string opgegevenNaam;
	Meetserie meetserie;
};


#endif

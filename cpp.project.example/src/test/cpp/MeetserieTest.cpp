#include "gtest/gtest.h"
#include "MeetserieTest.h"

#include <stdio.h>
using namespace std;


TEST_F(MeetserieTest, NogplaatsInMeetserieNaCreatie)
{
	ASSERT_FALSE( meetserie.isVol());
}


TEST_F(MeetserieTest, GeenPlaatsmeerAlsVol) 
{
	for(int i = 0; i < MaxAantalMeetwaarden; i++) 
	{
		ASSERT_FALSE(meetserie.isVol());
		meetserie.voegToe(i);	
	}

	ASSERT_TRUE( meetserie.isVol());
}


TEST_F(MeetserieTest, MeetwaardeOphalen) 
{
	int numbers[] = { 8,10,12 };
	int numberOfNumbers = 3;

	for(int i = 0; i < numberOfNumbers; i++) 
	{
		meetserie.voegToe(numbers[i]);
	}

	for(int i = 0; i < numberOfNumbers; i++) 
	{
		EXPECT_EQ(numbers[i], meetserie.getMeetwaarde(i));
	}
}



TEST_F(MeetserieTest, BepaalAantalMeetwaardenIsNulAlsLeeg) 
{
	int aantalWaarden = -1;
	meetserie.bepAantalMeetwaarden(aantalWaarden);

	ASSERT_EQ(0, aantalWaarden);
}


TEST_F(MeetserieTest, KijkenOfAantalMeetwaardesKlopt)
{
	int aantalWaarden = MaxAantalMeetwaarden;
	for(int i = 0; i < aantalWaarden; i++) {
		meetserie.voegToe(i);
		
		int opgehaaldAantalWaarden = -1;
		meetserie.bepAantalMeetwaarden(opgehaaldAantalWaarden);

		int verwachtAantalWaarden = i + 1;
		ASSERT_EQ(verwachtAantalWaarden, opgehaaldAantalWaarden);	
	}
}


TEST_F(MeetserieTest, MeetwaardeKomtNietVoor)
{
	meetserie.voegToe(5);
	meetserie.voegToe(8);
	
	ASSERT_FALSE(meetserie.meetwaardeKomtVoor(7));
}


TEST_F(MeetserieTest, MeetwaardeKomtWelVoor)
{
	
	meetserie.voegToe(5);
	meetserie.voegToe(7);
	meetserie.voegToe(8);
	
	ASSERT_TRUE(meetserie.meetwaardeKomtVoor(7));
}


TEST_F(MeetserieTest, MeetwaardeHeeftJuistNaam) 
{
	ASSERT_EQ(opgegevenNaam, meetserie.getNaam());	
}

TEST_F(MeetserieTest, MeetwaardeKanNaamVeranderen) 
{
	string nieuweNaam = "changed";
	meetserie.setNaam(nieuweNaam);
	ASSERT_EQ(nieuweNaam, meetserie.getNaam());	
}


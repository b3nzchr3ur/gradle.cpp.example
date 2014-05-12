
#ifndef MeetserieH
#define MeetserieH

#include <string>
using namespace std;

const int MaxAantalMeetwaarden = 10;

class Meetserie
{
  private:
    string naam;       // de naam van <Meetserie>
    int count;         // het aantal meetwaarden van Meetserie
    int meetwaarden[MaxAantalMeetwaarden]; // meetwaarden[0..count-1]
                                           // zijn de meetwaarden
  public:
    Meetserie(string nm);
    /* pre : -
       post: Meetserie bevat geen meetwaarden en de
             naam van Meetserie is nm
    */

    string getNaam();
    /* pre : -
       post: return de naam van Meetserie
    */

    void setNaam(string nm);
    /* pre : -
       post: de naam van Meetserie is nm
    */

    bool isVol();
    /* pre : -
       post: Als het aantal meetwaarden van Meetserie is maximaal
            Dan true
            Anders false
    */

    void voegToe(int meetw);
    /* pre : het aantal meetwaarden van Meetserie is niet maximaal
       post: meetw is aan de meetwaarden van Meetserie toegevoegd
    */

    bool meetwaardeKomtVoor(int meetw);
    /* pre : -
       post: Als meetw voorkomt onder de meetwaarden van Meetserie
             Dan return true
             Anders return false
    */

    int getMeetwaarde(int i);
    /* pre :  0<=i<aantal meetwaarden
       post:  return i-de meetwaarde
    */


    void bepAantalMeetwaarden(int& aantal);
    /* pre : -
       post : variabele “aantal” is gelijk aan het
              aantal meetwaarden van <Meetserie>
    */
};

#endif

#include <iostream>
#include <string>
using namespace std;

int main() {
    string vorname("helmut");
    string nachname("Bond");
    string geschlecht("w");
    string titel("dr");
    int alter = 20;

    if (alter < 18)
    {
      std::cout << "hello " + vorname ;
    }
    else
    {
      if (geschlecht == "w")
      {
        string tmp_geschlecht("Bond"); 
      }
      else
      {
        std::cout << "Sehr geehrter Herr " + nachname ;
      }

      if (titel == "dr")
      {
        std::cout << "Sehr geehrte Frau DR" + nachname ;
      }
      else
      {
        std::cout << "Sehr geehrter Herr DR" + nachname ;
      }

      std::cout << "Sehr" +
    }
    return 0;
}

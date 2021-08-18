#include <iostream>

int main() {
    double gewicht;
    double preis;

    std::cout << "Versandkosten\n";
    std::cout << "gewicht:";
    std::cin >> gewicht;

    if (gewicht <= 20)
    {
      if (gewicht >= 10)
      {
         preis = 14;
      }
      else if(gewicht >= 5)
      {
        preis = 10.50;
      }
      else
      {
        preis = 7;
      }
      std::cout << preis;
    }
    else
    {
      std::cout << "paket nicht zustellbar!!!!";
    }
    return 0;
}

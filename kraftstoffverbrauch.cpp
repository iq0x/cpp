#include <iostream>

int main() {
    double km;
    double l;

    std::cout << "Kraftstoffverbrauch\n";
    std::cout << "km:";
    std::cin >> km;
    l = km * 0.069583333;
    std::cout << l;
    std::cout << " l verbrauch";
    return 0;
}

#include <iostream>

int main() {
    double a;
    double b;
    double area;
    double umpfang;

    std::cout << "Rechteck berechnung\n";

    std::cout << "a:";
    std::cin >> a;
    std::cout << "b:";
    std::cin >> b;

    area = a * b;
    umpfang = 2*(a+b);

    std::cout << "area:";
    std::cout << area;
    std::cout << "\n";
    std::cout << "umpfang:";
    std::cout << umpfang;

    return 0;
}

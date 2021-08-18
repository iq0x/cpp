#include <iostream>

int main() {
    double dm;
    double result;
    
    std::cout << "DM to EURO Converter\n";
    std::cout << "DM:";
    
    std::cin >> dm;
    
    result = dm * 1.95583;
    
    std::cout << result;
    std::cout << " Euro";
    
    return 0;
}

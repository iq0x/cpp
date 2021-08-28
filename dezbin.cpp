#include <iostream>

using namespace std;

int main()
{
	int n = 43;
    int bin = 0;
    int temp;
    int i = 1;

    while (n != 0)
    {
        temp = n % 2;
        n /= 2;
        bin += temp * i;
        i *= 10;
    
    }
    std::cout << bin;
  
}


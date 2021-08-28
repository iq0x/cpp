#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int dec = 0;
	int i = 0; 
	int temp;
	int n = 111;
    while (n != 0)
    {
        temp = n % 10;
        n /= 10;
        dec += temp * pow(2,i);
        i++;
    }
  
    cout << dec;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
      string input;
      int i;
      std::cout<<"input: ";
      std::cin>>input;
      
      for(i = input.length(); i >= 0; i--)
		  {
			std::cout<< input[i];
		  }
      cin.get();
}

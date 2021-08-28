#include <iostream>
using namespace std;

int main ()
{
   int array[] = { 1, 2, 3, 4, 5 };
   int n = 5;
   int summe = 0;
   
   for(int i = 0; i < n ; i++){
      summe += array[i];
   }
   
   cout<<"Summe: "<<summe;
   return 0;
}

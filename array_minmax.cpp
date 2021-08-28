#include <iostream>
using namespace std;
 
int main()
{
   int array[] = {123123, 4232, 23424234, 94444};
   int n = 4;

   int max = array[0], min = array[0];
   for(int i = 1; i < n; i++)
   {
      if(max < array[i])
         max = array[i];
         
      if(min > array[i])
         min = array[i];
   }
   cout<<"max: "<<max<<"\n";
   cout<<"min: "<<min;
   
   return 0;
}

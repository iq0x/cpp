#include <iostream>

using namespace std;

int main() 
{
    string array[] = {"test1", "test2", "test4", "test3"};
    int i = 0;
    
    while (i < 4)
    {
        if (array[i] == "test1")
        {
            cout << "juhu";
        }
        i++;
    }
    return 0;
}

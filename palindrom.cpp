#include <iostream>

int main()
{
    std::string text = "jojo";
   
    if (text == std::string(text.rbegin(), text.rend())) 
    {
        std::cout << "palindrome";
    } 
    
    else 
    {
        std::cout << "kein palindrome";
    }

    return 0;
}

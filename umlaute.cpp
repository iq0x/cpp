#include <iostream>

using namespace std;

int main() 
{
    wstring text = L"dasdasÖch!";
    int i = 0;
      while (i < 7)
      {
	    i++;
	    if (text[i] == L'Ä' || text[i] == L'Ö' || text[i] == L'Ü')
		  cout << "gefunden" << endl;
      }
      return 0;
}

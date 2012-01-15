#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void wiersze(string nazwa,char zn)
{
    ifstream plik(nazwa.c_str());
    if(!plik.good())
    {
        cout << "Blad pliku";

    }

    string wiersz;
    int n = 0;

    while(!plik.eof())
    {
        getline(plik,wiersz);
        bool is = true;

        for(int i = 0; i < wiersz.size(); i++)
          if(wiersz[i] == zn)
          {
             is = false;
             break;
          }

        if(is)
          n++;
    }

    plik.close();
    cout << " Liczba wierszy nie zawierajych znaku  " << zn << " jest rowna:  " << n << endl;
}

int main()
{
    wiersze("dane.txt", 'k');
    return 0;
}

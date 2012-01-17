#include <iostream>
#include <fstream>

/*Z pliku ‘we.txt’ przepisac do  pliku ‘wy1.txt’ wszystkie znaki z wyjatkiem przecinków i sredników,
a do pliku ‘wy2.txt’ - wszystkie znaki z wyjatkiem spacji i myslników.*/

using namespace std;





int main()
{

    ifstream plik("we.txt");
    ofstream plik2("wy1.txt");
    ofstream plik3("wy2.txt");
    char zn;
    if(!plik.good())
    {
        cout << "Blad pliku";
        return 1;
    }

    else
    {

        while(!plik.eof())
        {
            zn = plik.get();
            if(zn != ';' && zn != ',')
               plik2 << zn;


            if(zn != ' ' && zn != '-')
                plik3 << zn;

        }





    }
    plik.close();
    plik2.close();
    plik3.close();
    return 0;
}

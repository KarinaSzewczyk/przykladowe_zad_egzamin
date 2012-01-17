#include <iostream>

/*Do tablic A,B[1..w,1..k] (w,k-sta³e) wczytaæ rekordy postaci (nazwa, cena).
 Wydrukowaæ, ile elementów tablicy A ma cenê wiêksz¹ od 1000 i ile elementów tablicy B ma cenê wiêksz¹ od 2000.*/

using namespace std;

struct Dane
{
   string nazwa;
   double cena;
};

int main()
{
   const int w = 2;
   const int k = 3;
   int n = 0;
   int m = 0;
   Dane A[w][k];
   Dane B[w][k];


    cout << "Podaj elementy tablic A i B w postaci naprzemian nazwy i ceny" << endl;

   for(int i = 0; i < w; i++)
    for(int j = 0; j < k; j++)
       {
            cin >> A[i][j].nazwa >> A[i][j].cena;
            if(A[i][j].cena > 1000)
            n++;
       }


    for(int i = 0; i < w; i++)
        for(int j = 0; j < k; j++)
        {
            cin >> B[i][j].nazwa >> B[i][j].cena;
            if(B[i][j].cena > 2000)
                m++;
        }


        cout << "TABLICA A :" << endl;
      for(int i = 0; i < w; i++)
        {
            for(int j = 0; j < k; j++)
                cout << A[i][j].nazwa << "," << A[i][j].cena << "    ";
            cout << endl;
        }

        cout << endl;
        cout << "TABLICA B:" << endl;

    for(int i = 0; i < w; i++)
        {
            for(int j = 0; j < k; j++)
                cout << B[i][j].nazwa << "," << B[i][j].cena << "    ";
            cout << endl;
        }

  cout << endl <<" Tablica A ma cene wieksza od 1000 dla " << n <<" elementow," << endl <<
  " zas tablica B ma cene wieksza od 2000 dla " << m << " elementow";

    return 0;
}

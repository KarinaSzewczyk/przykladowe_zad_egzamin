#include <iostream>
#include <fstream>

using namespace std;

const int w = 4;
const int k = 6;

int suma(int array[][k], int j,int s)
{
    int suma_l = 0;
    for(int i = 0; i < w; i++)
        if( array[i][j] % s == 0)
            suma_l+= array[i][j];
        return suma_l;
}
int main()
{
   ifstream plik("dane.txt");
   if(!plik.good())
   {
       cout << " Blad pliku!";
       return 1;
   }

   int A[w][k];
   int B[w][k];

    for(int i = 0; i < w; i++)
      for(int j = 0; j < k; j++)
        plik >> A[i][j];

    for(int i = 0; i < w; i++)
      for(int j = 0; j < k; j++)
         plik >> B[i][j];

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < k; j++)
        {
            cout.width(5); // czytelne wyswietlanie tablicy
            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < k; j++)
        {
            cout.width(5);
            cout << B[i][j] << " ";
        }

        cout << endl;
    }



    int suumaA;
    int suumaB;
    suumaA = suma(A, k - 1, 2) + suma(A, k - 2, 2) ;
    cout << "Suma liczb parzystych  w dwoch ostatnich kolumnach jest rowna: " << suumaA << endl;

    suumaB = suma(B,0, 3) + suma(B, k - 1, 3 );
    cout << "Suma liczb podzielnych przez 3 w dwoch skrajncyh kolumnach jest rowna: " << suumaB << endl;




    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int w = 5;
const int k = 4;
const int m = 3;


void tablicowa(int array[][k])
{
    srand(time(0));
    int suma = 0;
    for (int i = 0; i < w; i++)
        for(int j = 0; j < k; j++)
            array[i][j] = rand();

for (int i = 0; i < w; i++)
       {
        for(int j = 0; j < k; j++)
            cout << array[i][j] << " ";
        cout << endl;
        }

   for (int i = 0; i < w; i++)
       {
           for(int j = 0; j < k; j++)
                suma += array[i][j];

                if(suma % m == 0)
                    cout << "Numery wierszy w ktorych suma elementow podzielna jest przez" << m << ":" << endl << i << endl;
            suma = 0;
       }



}

int main()
{
    int array[w][k];
 tablicowa(array);


    return 0;
}

#include <iostream>

/*	Wczyta� punkty - rekordy postaci (x, y) do tablic A,B[1..n,1..n].
W ka�dej tablicy zamieni� miejscami dwa skrajne elementy na g��wnej przek�tnej.*/

using namespace std;


struct Point
{
    int x,y ;
};

int main()
{
    const int n = 3;
    Point A[n][n];
    Point B[n][n];

    cout << "Wczytaj liczby calkowite do tablicy rekordow" << endl;    //Load integers to array

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j].x >> A[i][j].y;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> B[i][j].x >> B[i][j].y;

    cout << "TABLICA A: " << endl;                                //Table A
    for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout << A[i][j].x << "," << A[i][j].y << " ";
            cout << endl;
        }
    cout << endl << "TABLICA B: " << endl;                         //Table B
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout << B[i][j].x << "," <<B[i][j].y << " ";
            cout << endl;
        }
    Point temp;
    for(int i = 0; i < n; i++)
    {
        temp = A[0][0] ;
        A[0][0]= A[n - 1][n - 1];
        A[n-1][n-1] = temp;
    }


    Point temp2;
    for(int i = 0; i < n; i++)
    {
        temp2 = B[0][0] ;
        B[0][0]= B[n - 1][n - 1];
        B[n-1][n-1] = temp2;
    }

    cout << endl << "Po zamianie skrajnych elementow na glownych przekatnych tablice wygladaja tak: "<< endl;
    cout << "TABLICA A:" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << A[i][j].x << "," << A[i][j].y << " ";
        cout << endl;
    }

    cout << endl << "TABLICA B: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << B[i][j].x << "," << B[i][j].y << " ";
        cout << endl;
    }


    return 0;
}

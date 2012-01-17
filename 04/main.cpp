#include <iostream>

/*Wczytywaæ liczby, a¿ do momentu, gdy dwie kolejne liczby bêd¹ równe dwom pierwszym.
Wydrukowaæ œredni¹ arytmetyczn¹ liczb tego ci¹gu
(³¹cznie z tymi dwiema ostatnimi). Przyj¹æ, ¿e w ci¹gu s¹ co najmniej 4 liczby. */


using namespace std;

int main()
{
    double x, y, poprzednia, aktualna;
    double suma1 = 0;
    double suma2 = 0;
    int n = 0 ;

    cout << "Podaj dwie liczby " << endl;

    cin >> x >> y;

    cout << "Wczytuj liczby, az do momentu, gdy kolejne liczby beda rowne dwom pierwszym" << endl;
    cin >> aktualna;
      suma1 = x + y + aktualna;
    do
    {

        poprzednia = aktualna;
        cin>> aktualna;
        suma2 += aktualna;
        n++;

    }while( poprzednia != x  ||   aktualna != y   );

    cout << " Srednia arytmetyczna wczytanych liczb jest rowna: " << (suma2 + suma1) / (3 + n);
    return 0;
}

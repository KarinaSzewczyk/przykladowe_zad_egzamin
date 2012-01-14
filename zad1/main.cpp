#include <iostream>

using namespace std;

int main()

{
    char zn, zn2;
    zn = ' ' ;
    const char k = '5';
    int l_cyfr = 0;
    do
    {
        cout << "Podaj znak" << endl;
        zn2 = zn;
        zn = cin.get();
        cin.ignore();
        if(zn >= '0' && zn <= '9')
            l_cyfr++;

    }while(zn != k || zn2 != k);

    cout << l_cyfr;
    return 0;
}

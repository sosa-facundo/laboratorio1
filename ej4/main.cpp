#include <iostream>

using namespace std;
/*Hacer un programa para ingresar un n�mero y luego se emita un cartel por
pantalla �Positivo� si el n�mero es mayor a cero, �Negativo� si el n�mero es
menor a cero o �Cero� si el n�mero es igual a cero.*/

int main()
{
     int N;
    cout << "ingrese un numero." << endl;
    cin >> N;

    if (N>0)
    {
        cout << "positivo" << endl;
    }

    else if (N<0)
    {
        cout << "negativo" << endl;
    }
    else
        cout << "cero" << endl;

    return 0;
}

#include <iostream>

using namespace std;
/*Hacer un programa para ingresar un número y mostrar por pantalla un cartel
aclaratorio si el mismo es PAR o IMPAR.
Nota: leé sobre el operador “Resto”. En el próximo video lo explicaremos!*/
int main()
{
     int N;
    cout << "ingrese un numero" << endl;
    cin >> N;

    if (N % 2 == 0)
    {
        cout << "par" << endl;
    }
    else
    {
        cout << "impar" << endl;
    }



    cout << "Hello world!" << endl;
    return 0;
}

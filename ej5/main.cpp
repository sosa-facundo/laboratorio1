#include <iostream>

using namespace std;
/*Hacer un programa para ingresar un n�mero y mostrar por pantalla un cartel
aclaratorio si el mismo es PAR o IMPAR.
Nota: le� sobre el operador �Resto�. En el pr�ximo video lo explicaremos!*/
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

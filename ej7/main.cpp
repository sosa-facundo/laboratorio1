#include <iostream>

using namespace std;
/*7. Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el mayor de ellos.*/


int main()
{
    int  n_1, n_2 , n_3 , n_4, n_mayor;

    cout << "ingresar 4 distintos" << endl;
    cin >> n_1;
    cin >> n_2;
    cin >> n_3;
    cin >> n_4;


    if (n_1>n_2)
    {
      n_mayor=n_1;
    }
    else
    {
        n_mayor=n_2;
    }

    if (n_3>n_mayor)
    {
        n_mayor=n_3;
    }

    if (n_4>n_mayor)
    {
        n_mayor=n_4;
    }
    cout << n_mayor << endl;

    return 0;
}

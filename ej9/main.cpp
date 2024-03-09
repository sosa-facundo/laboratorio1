#include <iostream>

using namespace std;
/*9. Hacer un programa para ingresar cinco números distintos y luego mostrar por pantalla el mayor y el menor de ellos.*/
int main()
{
    int n1 , n2 , n3 , n4 , n5 , mayor , menor;
    cout << "ingresar 5 numeros distintos: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;


    if (n1>n2)
    {
        mayor=n1;
        menor=n2;
    }
    else
    {
        mayor=n2;
        menor=n1;
    }

    if (n3>mayor)
    {
        mayor=n3;
    }
    else if (n3<menor)
    {
        menor=n3;
    }
    if (n4>mayor)
    {
        mayor=n4;
    }
    else if (n4<menor)
    {
        menor=n4;
    }
    if (n5>mayor)
    {
        mayor=n5;
    }
    else if(n5<menor)
    {
        menor=n5;
    }
    cout << "El mayor es " << mayor << " y el menor es "<< menor << endl;
    return 0;
}

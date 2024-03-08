#include <iostream>

using namespace std;
/*8. Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el menor de ellos.*/
int main()
{
    int n1 , n2 , n3 , n4 , menor;
    cout << "ingresar cuatro numeros." << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    if (n1<n2)
    {
        menor=n1;
    }
    else
    {
        menor=n2;
    }
    if (n3<menor)
    {
        menor=n3;
    }
    if (n4<menor)
    {
        menor=n4;
    }
    cout << menor << endl;

    return 0;
}

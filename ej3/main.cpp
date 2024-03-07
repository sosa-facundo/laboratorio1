#include <iostream>

using namespace std;
/*Hacer un programa para ingresar dos números y que luego emita por pantalla
el mayor de ellos o un cartel aclaratorio “Son iguales” en el caso de que así sea.
Nota: los números pueden ser iguales*/
int main()
{
    int n1 , n2;
   cout << "ingrese 2 numeros" << endl;
   cin >> n1;
   cin >> n2;

   if (n1>n2)
   {
       cout << n1 << endl;
   }
   else if (n2>n1)
   {
       cout << n2 << endl;
   }
   else
       cout << "son iguales" << endl;


    return 0;
}

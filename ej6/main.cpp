#include <iostream>

using namespace std;
/*Una casa de video juegos otorga un descuento dependiendo del importe de la
compra realizada seg�n los siguientes valores:
� Si el importe es menor a ARS 1000, no hay descuento.
� Si el importe es ARS 1000 o m�s pero menor a ARS 5000, aplica un
descuento del 10%.
� Si el importe es ARS 5000 o m�s, aplica un descuento del 18%.
Hacer un programa para ingresar un importe de venta y luego muestre por
pantalla el importe final con el descuento que corresponda.*/

int main()
{
    int importe_ingresado , importe_final;
    cout << "ingresar el importe final de la compra." << endl;
    cin >> importe_ingresado;


    if (importe_ingresado>=5000)
    {
      importe_final=importe_ingresado*0.82;
    }
    else if (importe_ingresado>=1000)
    {
         importe_final=importe_ingresado*0.90;
    }
    else
    {
        importe_final=importe_ingresado;
    }


    cout << "el importe final es " << importe_final << endl;

    return 0;
}

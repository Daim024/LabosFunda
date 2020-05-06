//Realizar un programa en c++ que reciba 1 producto comprado ~nombre,
//precio y cantidad comprada~ y mostrar el total de dinero gastado.
#include <iostream> 
#include <math.h>

using namespace std;

int main ()
{
    string producto;
    float precio;
    float compras;
    float mult1;
   cout<<"Gasto del producto adquirido" << endl;

   cout<<"\nNombre del producto: "; cin>>producto;
   cout<<"Cantidad comprada: "; cin>>compras;
   cout<<"Precio del producto: $"; cin>>precio;
   int mult = compras*precio;

   cout <<"Operando..."<<endl;

   cout<<"\nProducto: "<<producto<<endl;
   cout<<"\nCantidad: "<<compras<<endl;
   cout<<"\nPrecio del producto: $"<<precio<<endl;
   cout<<"\nDinero gastado: $"<<mult<<endl;

   cout<<"\nOperacion completada"<<endl;

return 0;
}
//Realizar un programa en c++ que reciba el radio de un círculo y calcular su
//área y perímetro.

#include <iostream>
using namespace std; 
 #define PI 3.1416

 int main (void)
 {
     int radio;
     cout << "Ingrese el valor del radio del circulo: " << endl;
     cin >> radio;

     cout << "Calculando..." << endl;

     cout << "El perimetro es: " << PI * (2 * radio) << endl;
     cout << "El area es: " << PI * (radio * radio) << endl;
     cout << " Calculo obtenido exitosamente." << endl;
     return 0;
 }
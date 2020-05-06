//Realizar un programa en c++ que devuelva el promedio de 3 numeros
//enteros.
#include <iostream>
using namespace std;

int main ()
{
    int reg;
    float num1,num2,num3,prom;

    cout << "Promedio de 3 numeros enteros." << endl;
    printf("Introduce un numero entero: ");
    scanf("%f",&num1);
    printf("Introduce un numero entero: ");
    scanf("%f",&num2);
    printf("Introduce un numero entero: ");
    scanf("%f",&num3);

    prom = (num1+num2+num3)/3;
    cout << "Calculando resultados..." << endl;
    cout << "..." << endl;
    cout << "Obteniendo los resultados..." << endl;
    cout << printf("El promedio de los numeros enteros es: %.2f",prom) << endl;
     cout << "Promedio obtenido exitosamente." << endl;

    return 0;
}
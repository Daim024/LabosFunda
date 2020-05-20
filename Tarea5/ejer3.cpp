//Realizar un programa en c++ que verifique si un número es positivo, negativo
//o cero.
#include "iostream"

using namespace std;

int main(void)
{
    int numero = 0;
        cout << endl;
cout << "Verifique si el numero que ingrese es positivo, negativo o cero" << endl;

        cout << ("\n Digite un numero: "); cin >>numero;


        if (numero >= 1){
            cout << ("\n El numero es positivo")<<endl;
        }else if (numero <= -1)
        {
            cout << ("\n El numero es negativo")<<endl;
        }
        else if (numero == 0)
        {
            cout << "\n El numero es: 0"<<endl;
        }
        
        cout << endl;
    return 0;
}
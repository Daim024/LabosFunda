 //Realizar un programa en c++ que verifique si un número es par o impar.

#include "iostream"

using namespace std;

int main(void)
{
    int numero;
    cout << endl;
    cout << "Verifique si el numero es par o impar."<< endl;

        cout << ("\n Digite el numero: "); cin >>numero;

        if (numero % 2 == 0){

            cout << ("\n El numero efectivamente es par.") <<endl;
        }else
        {
            cout << ("\n El numero efectivamente es impar.") <<endl;
        }
    cout << endl;
    return 0;
}
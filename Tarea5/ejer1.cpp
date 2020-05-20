//Realizar un programa en c++ que verifique si un número es divisible entre
//otro.

#include "iostream"

using namespace std;

int main(void)
{
    int num1, num2;
    cout << endl;
    cout << "Verifica si un numero es divisible entre otro" << endl; 

        cout << ("\n Ingrese el dividendo: "); cin>>num1;
        cout << ("\n Ingrese el divisor: "); cin>>num2;

        if(num1 % num2 == 0){
                cout << ("\n El numero es divisible entre ") <<num2 <<endl;
        }else{
                cout << ("\n El numero no es divisible entre ") <<num2 <<endl;
        }
cout << endl; 
    return 0;
}
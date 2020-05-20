//Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
//10 caracteres o no y si la longitud es par o impar.

#include <iostream>


using namespace std;

int main(void)
{ 
 string palabra;
 cout << "\nVerifique si la palabra tiene mas o menos de 10 caracteres y saber su longitud." << endl;
 cout << "\nIngrese una palabra: ";
 cin >> palabra;
int b= palabra.length();
if (b % 2 == 0)
{
 cout << "\nLa palabra tiene " << b << " letras y es par" << endl;
}
else {
    cout << "\nLa palabra tiene " << b << " letras y no es par" << endl;
}
 if((palabra.length())>= 10)
        {
        cout << "\nLa palabra es mayor a 10 caracteres \n "<< endl;
        }
        else {
            cout << "\nLa palabra es menor a 10 caracteres" << endl;
        }
    return 0;
}
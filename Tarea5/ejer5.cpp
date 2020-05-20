//Realizar un programa en c++ que verifique si la palabra ingresada inicia y
//finaliza con la misma letra.

#include "iostream"
#include "string"

using namespace std;

int main(void)
{
string palabra;

cout << "\nVerifica si tu palabra inicia y termina con la misma palabra."<<endl;

cout << "\nIngrese su palabra: ";
cin >> palabra;


if (palabra.front() == palabra.back()){
    cout << "\nLa letra del principio y del final son la misma." << endl;
}
else{
    cout << "\nLa letra del principio y del final no son la misma." << endl;
}
cout << endl;
return 0;
}

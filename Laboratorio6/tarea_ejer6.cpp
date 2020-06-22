#include "iostream"

using namespace std;
 int varia(int numero[100], int n, int buscar=0, int c=0){

    for (int i = 0; i < n; i++){
    cout<<endl;
    cout <<i+1<<". Ingrese el elemento: ";
        cin >> numero[i];}

    cout<<"\nIngrese el numero que desea buscar: ";
       cin>>buscar;

    for (int i = 0; i < n; i++){
        if (numero[i]==buscar)
        c++;}

        if (c!=0){
    cout<<"\nEl numero "<<buscar<<" aparece: "<<c<<" veces"<<endl;}
            else{
    cout<<"El numero "<<buscar<<" no aparece en la lista"<<endl;}

return 0;}

int main(void){

int numero[100];
int n;
int buscar=0;
int c=0;
int f;

   cout<<"\n...Conteo de numeros..."<<endl;

   cout <<"\nCuantos numeros desea ingresar: ";
       cin >>n;

   f=varia (numero, n, buscar=0, c=0);
   cout <<f;
}
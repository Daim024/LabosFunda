#include "iostream"

using namespace std;

int fecha(int año, int año2, int dia, int dia2, int mes, int mes2){
  if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || 
  (dia == 28 && mes == 2 && ((año % 4 != 0) || (año % 100) == 0) && (año % 400) != 0) || dia == 31)
    {mes2 = mes + 1;
     dia2 = 1;}
  else{
    dia2 = dia + 1;
    mes2 = mes;}

  if (dia2 == 1 && mes2 == 13){
    mes2 = 1;
    año2 = año + 1;}
  else{
     año2 = año;}

   cout<<"\nValor del año siguiente: "<<año2<<endl;
   cout<<"Valor del mes siguiente: "<<mes2<<endl;
   cout<<"Valor del dia suguiente: "<<dia2<<endl;
   cout<<endl;   

return 0;}

 int main(){
int año,año2,dia,dia2,mes,mes2,e;
   cout<<"\n...Calendario..."<<endl;

    cout<<("\nIngrese un año: ");
        cin>>año;
    cout<<("Ingrese mes: ");
        cin>>mes;  
    cout<<("Ingrese el dia: ");
        cin>>dia;

 e = fecha(año,año2,dia,dia2,mes,mes2);
 cout<<e<<endl;
}
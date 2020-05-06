//Realizar un programa en c++ que reciba a, b y c y nos devuelva el resultado
//de la formula cuadra¡tica

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main (void)
{
    float a, b, c, res1, res2, res3, res4, res5;
    printf ("Uso de la formula general para resolver ecuacion cuadratica \n");
    printf ("\n Ingrese el termino a de la seccion cuadratica\n");
    scanf ("%f",&a);
    printf ("\n Ingrese el termino b de la seccion lineal\n");
    scanf ("%f",&b);
    printf ("\n Ingrese el termino c de la seccion independiente\n");
    scanf ("%f",&c);
    if (a!= 0)
    {
        res3=pow(b,2);
        res4=(4*a*c);
        res5=(res3-res4);
        if(res5<0)
        {
            printf("No existen raices negativas");
            printf("\a");
        }
        if (res5>=0){
            res1=((-b+(sqrt(res5)))/(2*a));
            res2=((-b-(sqrt(res5)))/(2*a));
            if(res1==res2){
                printf("\n El resultado es igual para + y - y es: %.4f",res1);
            }
        
           
           if (res1!=res2){
               printf ("\n El resultado de + es %.4f",res1);
               printf ("\n El resultado de - es %.4f", res2); 
                          }
               }
        }
        if(a==0) {
            printf("No es posible realizar la operacion");
            printf("\a");
                }
                cout << "." << endl;

    return 0;

}
#include "iostream"

using std::cout;
using std::endl;
using std::cin;

 bool bisiesto(int a){

 if((a % 4 != 0 || (a % 100 == 0 && a % 400 != 0) )== 0)          
{return true;
}
 if((a % 4 != 0 || (a % 100 == 0 && a % 400 != 0))== 1)
 {return false;
}
 cout<<endl;

 return 0;
 }
int main(){
    int a, b;
    cout << "\nDescubre si la fecha que piensas es bisiesta o no"<<endl;
    cout << "\nIngrese la fecha que deseas saber: ";
    cin >>a;
    
    b = bisiesto(a);
    cout << b;
    cout<<endl;
    if(bisiesto(a)==true)
    {
        cout<<"La fecha si es bisiesta"<<endl;
    }
    else{
        cout<<"La fecha no es bisiesta"<<endl;
    }
}
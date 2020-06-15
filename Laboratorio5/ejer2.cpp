#include "iostream"

using namespace std;

int hora(int h, int m, int s){
    cout<<"\n...La hora..."<<endl;

    cout<<"\nIntroduzca la hora: ";
    cin>>h;
    cout<<"Introduzca los minutos: ";
    cin>>m;
    cout<<"Introduzca los segundos: ";
    cin>>s;

    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {s++;
     if ( s == 60 )
    { s = 0;
      m++;
     if ( m == 60 )
     {m = 0;
      h++;
      if ( h == 24 )
       h = 0;}
        }
     cout<<"\nUn segundo despues la hora es: "<<h<<" h : "<<m<<" min : "<<s<<" seg."<<endl;}
    else
        cout<<( "\n...ERROR: La hora es incorrecta..." );
        cout<<endl;
    return 0;
}
int main(){
int h, m, s, f;

f = hora(h, m, s);

   cout<<f<<endl; 
}
#include "iostream"
#include "algorithm"

using namespace std;

int numero(int a,int b,int rest,int num1,int num2){

cout << "\n...El MCM..." << endl;
cout << "\nDigite un numero mayor: "; 
cin >> a ;
cout << "Digite un numero menor: ";
cin >> b;

num1 = std::max(a,b);
num2 = std::min(a,b);

do {
    rest=num2;
    num2 = num1%num2;
    num1 = rest; 
}
while(num2!=0);
cout<<"\nEl MCD esta entre "<<a<<" y "<<b<<" es: "<<endl;

return rest;
}

int main(){
int a,b,num1,num2,rest,e;

e = numero(a,b,num1,num2,rest);

cout<<e<<endl;

 }
#include "iostream"

using namespace std;

    void num(int a[199]){

   for(int i=199; i>=1; i-=2){
       a[i]=i;
       cout<<a[i]<<", ";}
       cout<<endl;   
}

int main(){

   int a[199], f;
   cout<<"\n...Numeros impares, de mayor a menor..."<<endl;
   cout<<"   Los primeros 100 impares"<<endl;
  
   num (a);}
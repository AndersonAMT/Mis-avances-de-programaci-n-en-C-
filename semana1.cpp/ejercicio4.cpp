#include <iostream>
using namespace std;

int main(){
   float n1,n2,suma,resta,mul,div;    
   cout<<"Escribe un numero: ";
   cin>>n1;
   cout<<"Escribe un numero: ";
   cin>>n2;
   suma=n1+n2;
   resta=n1-n2;
   mul=n1*n2;
   div=n1/n2;
   cout<<"El resultado de la suma= "<<suma<<"\n";
   cout<<"El resultado de la resta= "<<resta<<"\n";
   cout<<"El resultado de la multiplicacion= "<<mul<<"\n";
   cout<<"El resultado de la division= "<<div<<"\n";
   
system("pause");
    return 0;
}
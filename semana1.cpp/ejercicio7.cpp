#include <iostream>
using namespace std;

int main (){
   float a,b,c,d,e,f,res;
   std::cout<<"Ingresa los valores de numericos que se te pide:\n";
   std::cout<<"valor a: ";std::cin>>a;
   std::cout<<"valor b: ";std::cin>>b;
   std::cout<<"valor c: ";std::cin>>c;
   std::cout<<"valor d: ";std::cin>>d;
   std::cout<<"valor e: ";std::cin>>e;
   std::cout<<"valor f: ";std::cin>>f;
   std::cout.precision(3);
   res=(a+(b/c)) / (d+(e/f));

   std::cout<<"\nEl resultado es el siguiente: "<<res<<"\n";



system("pause");
    return 0;
}
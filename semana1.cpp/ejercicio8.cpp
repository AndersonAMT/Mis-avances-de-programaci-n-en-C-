#include <iostream>

int main(){
    
    int a,b,aux;
    std::cout<<"Escribe lo que se te pide:\n";
    std::cout<<"Valor de a: ";std::cin>>a;//10
    std::cout<<"Valor de b: ";std::cin>>b;//5
    aux=a;//aux=10
    a=b;//5
    b=aux;//10
    std::cout<<"\nAqui esta tus valores intercambiados: ";
    std::cout<<"Valor de a: "<<a<<"\n";
    std::cout<<"Valor de b: "<<b<<"\n";


    system("pause");
    return 0;
}
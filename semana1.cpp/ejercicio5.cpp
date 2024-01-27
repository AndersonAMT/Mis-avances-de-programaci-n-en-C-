#include <iostream>
using namespace std;
int main(){
    char sexo[10];
    int edad;
    float estatura;

    cout<<"Escribe lo siguiente:";
    cout<<"\nSexo: "; cin>>sexo;
    std::cout<<"\nEdad: "; std::cin>>edad;
    std::cout<<"\nEstatura: "; std::cin>>estatura;

    std::cout<<"\nAhi estan tus datos\n";
    std::cout<<"Sexo:"<<sexo<<"\n";
    std::cout<<"Edad:"<<edad<<"\n";
    std::cout<<"Estatura:"<<estatura<<"\n";

    system("pause");
    return 0;
}
#include <iostream>

int main (){
    float practicas,participacion,examen,res;
    std::cout<<"Escribe los siguientes datos:\n";
    std::cout<<"Calificacion de las practicas: ";std::cin>>practicas;
    std::cout<<"Calificacion de las participaciones: ";std::cin>>participacion;
    std::cout<<"Calificacion de los examenes: ";std::cin>>examen;
    practicas*=0.40;
    participacion*=0.20;
    examen*=0.40;
    res=practicas+participacion+examen;
    std::cout<<"\nAqui esta tu resultado: "<<res<<"\n";
    system("pause");
    return 0;
}
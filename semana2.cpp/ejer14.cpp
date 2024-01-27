#include <iostream>
using namespace std;

enum estado{
    off;
    on;
    on hold;

};

int main(){
  
    Estado estadoActual = on;

    if(estadoActual == off) {
        cout<<"El dispositivo esta apagado: "<<endl;
    } else if (estadoActual == on) {
        cout<<"El dispositivo esta encendido: "<<endl;
    } else {
        cout<<"El dispositivo esta en espera: "<<endl;
    }
return 0;
}

#include <iostream>
using namespace std;
int main (){
    cout<<"Suba su nota de comportamiento: ";
    int comportamiento = 20;
    string mensaje= (comportamiento >=11 ) ? "Buen comportamiento" : "Mal comportamiento";
    cout<<mensaje;
    system("pause");
    return 0;
}
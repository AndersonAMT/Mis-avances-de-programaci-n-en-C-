#include <iostream>
using namespace std;

int main(){

    int array[8];
    for (int i = 0; i < 8; i++)
    {
        cout<<"posicion del elemento: "<<i<<" : ";
        cin>>array[i]; 
    }
    cout<<"Contenidado de mi array \n";
    for (int i = 0; i < 8; i++)
    {
        cout<<array[i]<< " ";
    }
    
     return 0;
}    
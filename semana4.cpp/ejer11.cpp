#include <iostream>
using namespace std;

int main (){

    int n1,n2,answer;
    char op;
    do {
    cout<<"Ingresar 2 numeros: "<<endl;
    cin>>n1>>n2;
    answer=n1+n2;
    cout<<"the sum of: "<<n1<<"+"<<n2<<"is equal to: "<<answer<<endl;
    cout<<"¿do you wish to continue? (s/n): ";
    cin>>op;
    op=tolower(op);
}while (op=='s');
cout<<"se you soon!!";
    return 0;
}
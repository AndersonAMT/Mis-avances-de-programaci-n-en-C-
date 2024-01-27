#include <iostream>
using namespace std;
int main(){
    float a,b,res;
    std::cout<<"Ingresa lo siguiente:\n";
    std::cout<<"valor a:";std::cin>>a;
    std::cout<<"valor b:";std::cin>>b;
    res=(a/b)+1;
    std::cout.precision(3);
    std::cout<<"\nAqui esta tu resultado:"<<res<<"\n";
    system("pause");
    return 0;
}
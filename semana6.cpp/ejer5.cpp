#include <iostream>
using namespace std;

struct Student
{
    string name;
    string faculty;
    double nota[5];
};
int main()
{
    Student lista[10];
    lista[0].name = "Jose";
    lista[0].faculty = "System";
    lista[0].nota[0] = 10.5;
    lista[0].nota[1] = 20;
    lista[0].nota[2] = 8;
    lista[0].nota[3] = 1;
    lista[0].nota[4] = 11;

    return 0;
}
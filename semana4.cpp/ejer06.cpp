#include <iostream>
using namespace std;
int main()
{

    int counter = 0;
    while (true)
    {
        cout << "hello" << endl;
        if (counter == 9)
            break;
        ++counter;
    }

    return 0;
}
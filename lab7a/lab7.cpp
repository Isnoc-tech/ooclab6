#include "Distance.h"
#include <iostream>
using namespace std;

int main()
{
    Distance d1;

    cout << "Distance d1 (default constructor): ";
    d1.printDistance();

    Distance d2(11, 6.25);
    cout << "Distance d2 (overloaded constructor): ";
    d2.printDistance();


    return 0;
}


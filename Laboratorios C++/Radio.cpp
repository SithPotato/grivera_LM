#include <iostream>
using namespace std;

int main()
{
    double area;
    double radio;
    const double Pi= 3.14;

    cout <<"Ingrese la media del radio: ";
    cin >>radio;

    area = Pi * radio * radio;

    cout <<"el area media es "<<radio <<endl;

    return 0;
} 

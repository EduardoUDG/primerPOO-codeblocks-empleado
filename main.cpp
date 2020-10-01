#include <iostream>
#include <string>
#include "empleado.h"

using namespace std;

int main()
{
    char nombre[30];
    int edad;
    cout<<"Digita el nombre: ";
    cin.getline(nombre,30,'\n');
    cout<<"Digita la edad: ";
    cin>>edad;


    Empleado caja(nombre,edad);
    cout<<endl;
    caja.getDatos();

    return 0;
}

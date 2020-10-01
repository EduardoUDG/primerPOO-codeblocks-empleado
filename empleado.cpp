
#include <iostream>
#include <conio.h>
#include "empleado.h"

using namespace std;

//Con el metodo constructor llamaremos el nombre de las otras funciones
//Para iniciarlizar los valores
Empleado::Empleado(string n, int e) {
    setNombre(n);
    setEdad(e);
}

void Empleado::setNombre(string nom){
    nombre = nom;
}

void Empleado::setEdad(int age){
    edad = age;
}

void Empleado::getDatos(){
    cout<<"El nombre del empleado es: "<<nombre<<endl;
    cout<<"La edad del empleado es:"<<edad<<endl;
}

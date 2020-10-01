#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED


#include <string>
using namespace std;


class Empleado {
    private:
        string nombre;
        int edad;
    public:
        Empleado(string, int);
        void setNombre(string) ;
        void setEdad(int) ;
        void getDatos() ;
};


#endif // EMPLEADO_H_INCLUDED

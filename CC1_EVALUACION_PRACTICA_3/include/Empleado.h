#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>

using namespace std;

class Empleado
{
    private:
        string nombre, apellido;
        double salario;
    public:
        Empleado (string="" , string="", double=0.0);
        string obtenerNombre();
        string obtenerApellido();
        double obtenerSalario();
        void salarioNegativo_Nulo();
        double salarioAnual();
        void salario_10Porcent();
        void lista_empleado();
};

#endif // EMPLEADO_H

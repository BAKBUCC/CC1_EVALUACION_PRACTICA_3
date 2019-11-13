#include "Empleado.h"
#include <string>

Empleado::Empleado(string nombre, string apellido, double salario)
{
    this->nombre=nombre;
    this->apellido=apellido;
    this->salario=salario;
}
string Empleado::obtenerNombre()
{
    return nombre;
}
string Empleado::obtenerApellido()
{
    return apellido;
}
double Empleado::obtenerSalario()
{
    return salario;
}
void Empleado::salarioNegativo_Nulo()
{
    if (salario<0)
    {
        salario=0.0;
    }
}
double Empleado::salarioAnual()
{
    return salario*12;
}
void Empleado::salario_10Porcent()
{
    salario = (salario-(salario/10));
}
void Empleado::lista_empleado()
{
    cout<<"("<<nombre<<", "<<apellido<<", "<<salario<<")";
}


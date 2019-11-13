#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

Estudiante::Estudiante(string nombre, string apellido, string codigo)
{
    this->nombre=nombre;
    this->apellido=apellido;
    this->codigo=codigo;
}
string Estudiante::obtenerNombre()
{
    return nombre;
}
string Estudiante::obtenerApellido()
{
    return apellido;
}
string Estudiante::obtenerCodigo()
{
    return codigo;
}
void Estudiante::printEstudiante()
{
    cout<<"("<< nombre <<", "<< apellido <<", "<< codigo <<")"<<endl;
}
void Estudiante::cambiarDatos(string nombre, string apellido, string codigo)
{
    this->nombre=nombre;
    this->apellido=apellido;
    this->codigo=codigo;
}

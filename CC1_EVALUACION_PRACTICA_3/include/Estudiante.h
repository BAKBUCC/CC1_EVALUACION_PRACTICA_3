#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

using namespace std;

class Estudiante
{
    string nombre, apellido, codigo;
    public:
        Estudiante (string="" , string="", string="0.0");
        string obtenerNombre();
        string obtenerApellido();
        string obtenerCodigo();
        void printEstudiante();
        void cambiarDatos(string, string, string);
};

#endif // ESTUDIANTE_H

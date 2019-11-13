#ifndef CURSO_H
#define CURSO_H
#include "Estudiante.h"
#include <string>

using namespace std;

class Curso
{
        string nombre;
        string codigo;
        Estudiante *alumnos;
        int cantidaAlumnos;
    public:
        string seleccion;
        Curso(string="", string="", Estudiante * = nullptr, int=0);
        void printDatos();
        string obtencion_y_modificacionNombre();
        string obtencion_y_modificacionCodigo();
        void obtencion_y_modificacionAlumnos();
        int obtencion_y_modificacionCantidaAlumnos();

};

#endif // CURSO_H

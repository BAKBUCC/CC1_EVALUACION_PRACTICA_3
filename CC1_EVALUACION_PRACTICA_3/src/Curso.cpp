#include "Curso.h"
#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;

Curso::Curso(string nombre, string codigo, Estudiante *alumnos, int cantidaAlumnos)
{
    this->nombre=nombre;
    this->codigo=codigo;
    this->alumnos=alumnos;
    this->cantidaAlumnos=cantidaAlumnos;
}

void Curso::printDatos()
{
    cout<<"(nombre de la clase:"<< nombre <<", codigo:"<< codigo <<", cantidad de alumnos:"<< cantidaAlumnos <<")"<<endl;
}

string Curso::obtencion_y_modificacionNombre()
{
    cout<<"¿Quieres obtener o modificar el Nombre de la clase(ob/mo)"<<endl;
    cin>>seleccion;
    if (seleccion=="OB" || seleccion=="ob")
    {
        return nombre;
    }
    else if (seleccion=="MO" || seleccion=="mo")
    {
        cout<<"ingrese nombre: ";
        cin >> nombre;
        return nombre;
    }
}

string Curso::obtencion_y_modificacionCodigo()
{
    cout<<"¿Quieres obtener o modificar el Codigo de la clase(ob/mo)"<<endl;
    cin>>seleccion;
    if (seleccion=="OB" || seleccion=="ob")
    {
        return codigo;
    }
    else if (seleccion=="MO" || seleccion=="mo")
    {
        cout<<"ingrese codigo: ";
        cin >> codigo;
        return codigo;
    }
}

void Curso::obtencion_y_modificacionAlumnos()
{
    cout<<"¿Quieres obtener los datos de los alumnos(ob) o modificar los datos de los alumnos(mo)?(ob/mo)"<<endl;
    cin>>seleccion;
    if (seleccion=="OB" || seleccion=="ob")
    {
        int i;
        for (i=0; i<cantidaAlumnos; i++)
        {
            alumnos->printEstudiante();
            alumnos++;
        }
        alumnos-=i;
    }
    else if (seleccion=="MO" || seleccion=="mo")
    {
        int *posicion=new int;
        cout<<"¿en que posicion está su alumno según la posicion dada?:" ;
        cin>>*posicion;
        (alumnos+*posicion-1)->printEstudiante();
        string *nombreAlumno= new string;
        cout<<"nombre nuevo: ";
        cin>>*nombreAlumno;
        cout<<endl;
        string *apellidosAlumno= new string;
        cout<<"apellido nuevo: ";
        cin>>*apellidosAlumno;
        cout<<endl;
        string *codigoAlumno= new string;
        cout<<"codigo nuevo: ";
        cin>>*codigoAlumno;
        cout<<endl;
        (alumnos+*posicion-1)->cambiarDatos(*nombreAlumno, *apellidosAlumno, *codigoAlumno);
        int i;
        for (i=0; i<cantidaAlumnos; i++)
        {
            alumnos->printEstudiante();
            alumnos++;
        }
        alumnos-=i;
    }
}

int Curso::obtencion_y_modificacionCantidaAlumnos()
{
    cout<<"¿Quieres obtener o modificar la cantidad de alumnos(ob/mo)"<<endl;
    cin>>seleccion;
    if (seleccion=="OB" || seleccion=="ob")
    {
        return cantidaAlumnos;
    }
    else if (seleccion=="MO" || seleccion=="mo")
    {
        cout<<"ingrese la nueva cantidad de alumnos"<<endl;
        cin >> cantidaAlumnos;
        return cantidaAlumnos;
    }
}



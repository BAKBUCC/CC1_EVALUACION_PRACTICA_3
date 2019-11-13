#include <iostream>
#include <string>
#include "Empleado.h"
#include "Estudiante.h"
#include "Curso.h"

using namespace std;

void printL(string *a, int tam)
{
    for (int i=0; i<tam ; i++)
    {
        cout<<*a<<'\t';
        a++;
    }
}

void ordenamiento(string *apellido, int tam)
{
    for (int i=1; i<tam; i++)
    {
        int j;
        for (j=0; j<tam-i; j++)
        {
            for (unsigned int k=0; k<apellido->length() || k<(apellido+1)->length() ; k++)
            {
                if(apellido->at(k)>(apellido+1)->at(k))
                {
                    swap(*apellido,*(apellido+1));
                    break;
                }
                else if (apellido->at(k)<(apellido+1)->at(k))
                {
                    break;
                }
            }
            apellido++;
        }
        apellido-=j;
    }
}


int main()
{
//    Problem 1. [10 puntos] Cree una clase llamada Empleado que incluya la siguiente informacion
//    como datos miembro de la clase: nombre (string), apellido (string) y salario (tipo double).
//    Implemente constructores de la clase. Proporcionar tambien funciones para la obtencio´n de
//    cada dato miembro. Si el salario no es positivo, aju´stelo a 0. Cree dos objetos de empleado
//    y muestre el salario anual de cada objeto. Despues bajarle el sueldo cada empleado, el 10 por
//    ciento de su sueldo, y ﬁnalmente mostrar el salario anual de cada empleado.


    Empleado *empleados = new Empleado[2];

    *empleados = Empleado("Jorge", "Alvedo", 200.50);
    *(empleados+1) = Empleado("Javier", "Gusto", -2003.9);
    Empleado *ptr_de_empleado = empleados;
    cout<<"Nombre: "<<ptr_de_empleado->obtenerNombre()<<endl;
    cout<<"Apellido: "<<ptr_de_empleado->obtenerApellido()<<endl;
    cout<<"Salario: "<<ptr_de_empleado->obtenerSalario()<<endl;

    cout<<endl;

    if (ptr_de_empleado->obtenerSalario()<0)
    {
        ptr_de_empleado->salarioNegativo_Nulo();
        cout<<"Salario Nuevo: "<<ptr_de_empleado->obtenerSalario()<<endl;
    }
    else
    {
        cout<<"Salario Anual sin sacarle el 10%: "<<ptr_de_empleado->salarioAnual()<<endl;
        ptr_de_empleado->salario_10Porcent();
        cout<<"Salario Anual 10% menos: "<<ptr_de_empleado->salarioAnual()<<endl;
    }

    cout<<endl;
    cout<<endl;
    ptr_de_empleado++;

    cout<<"Nombre: "<<ptr_de_empleado->obtenerNombre()<<endl;
    cout<<"Apellido: "<<ptr_de_empleado->obtenerApellido()<<endl;
    cout<<"Salario: "<<ptr_de_empleado->obtenerSalario()<<endl;

    cout<<endl;

    if (ptr_de_empleado->obtenerSalario()<0)
    {
        ptr_de_empleado->salarioNegativo_Nulo();
        cout<<"Salario Nuevo: "<<ptr_de_empleado->obtenerSalario()<<endl;
    }
    else
    {
        cout<<"Salario Anual sin sacarle el 10%: "<<ptr_de_empleado->salarioAnual()<<endl;
        ptr_de_empleado->salario_10Porcent();
        cout<<"Salario Anual 10% menos: "<<ptr_de_empleado->salarioAnual()<<endl;
    }



//    Problem 2. [10 puntos] Implemente un algoritmo de ordenamiento para un arreglo de la clase de
//    la pregunta anterior. El ordenamiento debe ser en base al apellido, de la A a la Z.

    string a[]={"luzvelocidad","soluminosidad"};
    string *ptra=a;
    char ptrb = ptra[0][0];
    cout<<ptrb<<endl;
    cout<<"¿cuantos empleados hay? ";
    short n_empleados;
    cin>>n_empleados;
    Empleado *empleados_2 = new Empleado[n_empleados];
    string *apellidos = new string[n_empleados];

    for (short i=0; i<n_empleados; i++)
    {
        string nombre;
        string apellido;
        double salario;
        cout<<endl;
        cout<<"empleado "<< i+1 <<":"<<endl;
        cout<<"nombre: ";
        cin>>nombre;
        cout<<"apellido: ";
        cin>>apellido;
        cout<<"salario: ";
        cin>>salario;
        *empleados_2=Empleado(nombre,apellido,salario);
        *apellidos=empleados_2->obtenerApellido();
        empleados_2++;
        apellidos++;
    }
    apellidos-=n_empleados;
    printL(apellidos, n_empleados);
    cout<<endl;
    ordenamiento(apellidos,n_empleados);
    printL(apellidos, n_empleados);
    cout<<endl;

//    SEGUNDA PRUEBA;

//    (a) (10 points) una llamada Estudiante, el cual tiene siguiente informacio´n como datos miembro
//    de la clase: nombre (string), apellido (string) y co´digo (tipo string). Implemente constructores
//    de la clase. Proporcionar tambien funciones para la obtenci´on de cada dato miembro. En la funci´on
//    principal (main) crear dos objetos e invocar a los m´etodos de la clase.

    Estudiante *estudiantes = new Estudiante[2];

    *estudiantes = Estudiante("Lucho", "Apaza", "191-10-11014");
    *(estudiantes+1) = Estudiante("Roberto", "Mengano", "191-10-47098");
    Estudiante *ptr_de_estudiante = estudiantes;
    cout<<"Nombre: "<<ptr_de_estudiante->obtenerNombre()<<endl;
    cout<<"Apellido: "<<ptr_de_estudiante->obtenerApellido()<<endl;
    cout<<"Codigo: "<<ptr_de_estudiante->obtenerCodigo()<<endl;

    cout<<endl;

    ptr_de_estudiante++;

    cout<<"Nombre: "<<ptr_de_estudiante->obtenerNombre()<<endl;
    cout<<"Apellido: "<<ptr_de_estudiante->obtenerApellido()<<endl;
    cout<<"Codigo: "<<ptr_de_estudiante->obtenerCodigo()<<endl;

    cout<<endl;

//    (b) (10 points) otra llamada Curso que incluya la siguiente informaci´on como datos miembro de la clase:
//        nombre (string), co´digo (string), alumnos (puntero a un conjunto de elementos de tipo Estudiante) y
//        cantidaAlumnos (tipo int) como variables miembro privadas. Considere tambien: Constructor con argumentos;
//        Constructor copia; Funciones miembro para la obtenci´on y modiﬁcacio´n de cada dato miembro de la clase;
//        Funci´on para incrementar en uno el nu´mero de estudiantes; En la funcio´n principal (main) crear dos
//        objetos e invocar a los m´etodos de la clase.

    int cantidaAlumnos=6;
    estudiantes = new Estudiante[cantidaAlumnos];

    *estudiantes = Estudiante("Lucho", "Apaza", "191-10-11014");
    *(estudiantes+1) = Estudiante("Roberto", "Mengano", "191-10-47098");
    *(estudiantes+2) = Estudiante("María", "Ludovico", "191-10-24563");
    *(estudiantes+3) = Estudiante("Jimena", "Montes", "191-10-12411");
    *(estudiantes+4) = Estudiante("Andrea", "Lozano", "191-10-97653");
    *(estudiantes+5) = Estudiante("Renzo", "Mamani", "191-10-56732");

    Curso curso("Ccomp", "191-10-00000", estudiantes, cantidaAlumnos);
    Curso cursoCopia=curso;
    cursoCopia.printDatos();
    cout<<endl;

    cout<<"ALUMNOS"<<endl;
    cout<<"-------"<<endl;
    for (int i=0; i<cantidaAlumnos; i++)
    {
        cout<<i+1;
        estudiantes->printEstudiante();
        estudiantes++;
    }
    cout<<cursoCopia.obtencion_y_modificacionNombre()<<endl;
    cursoCopia.printDatos();
    cout<<cursoCopia.obtencion_y_modificacionCodigo()<<endl;
    cursoCopia.printDatos();
    cursoCopia.obtencion_y_modificacionAlumnos();
    cout<<cursoCopia.obtencion_y_modificacionCantidaAlumnos()<<endl;
    cursoCopia.printDatos();


    return 0;
}

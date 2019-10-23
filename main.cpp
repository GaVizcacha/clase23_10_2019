#include <iostream>
#include "funciones.h"
#include "seccion.h"

int main() {
    c_alumnno a1("Xyoby","ElTrikas",15);
    c_alumnno a2("Ernesto","Gaaaaa",25);
    c_alumnno a3;
    c_alumnno a4 = a2;

    std::cout <<"Alumnos:"<<std::endl;
    cout<<a1.get_apellidos()<<", "<<a1.get_nombre()<<", "<<a1.get_edad()<<"."<<endl;
    cout<<a2.get_apellidos()<<", "<<a2.get_nombre()<<", "<<a2.get_edad()<<"."<<endl;
    cout<<a3.get_apellidos()<<", "<<a3.get_nombre()<<", "<<a3.get_edad()<<"."<<endl;
    cout<<a4.get_apellidos()<<", "<<a4.get_nombre()<<", "<<a4.get_edad()<<"."<<endl;

    seccion_t pool_lab204(4);
    pool_lab204.set_alumno(0,a1);
    pool_lab204.set_alumno(1,a2);
    pool_lab204.set_alumno(2,a3);
    pool_lab204.set_alumno(3,a4);
    pool_lab204.imprimir_lista();
    return 0;
}
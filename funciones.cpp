//
// Created by Jean Pierre on 23/10/2019.
//

#include "funciones.h"


c_alumnno::c_alumnno() :
    nombre(),apellido(),edad(0){
    cout<<__PRETTY_FUNCTION__<<endl;
}

c_alumnno::c_alumnno(texto n, texto a, numerico nn):
    nombre(n),apellido(a),edad(nn){
    cout<<__PRETTY_FUNCTION__<<endl;
}

c_alumnno::c_alumnno(c_alumnno &alumnno) {
    cout<<__PRETTY_FUNCTION__<<endl;
    nombre = alumnno.nombre;
    apellido = alumnno.apellido;
    edad = alumnno.edad;

}

texto c_alumnno::get_nombre() {
    return nombre;
}

texto c_alumnno::get_apellidos() {
    return apellido;
}

numerico c_alumnno::get_edad() {
    return edad;
}

//
// Created by Jean Pierre on 23/10/2019.
//

#ifndef CLASE23_10_2019_FUNCIONES_H
#define CLASE23_10_2019_FUNCIONES_H
#include "type.h"
class c_alumnno{
    texto nombre;
    texto apellido;
    numerico edad;
public:
    c_alumnno();
    c_alumnno(texto nombre,texto apellido,numerico edad);
    c_alumnno(c_alumnno& alumnno);
    texto get_nombre();
    texto get_apellidos();
    numerico get_edad();
};

#endif //CLASE23_10_2019_FUNCIONES_H

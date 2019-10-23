//
// Created by Jean Pierre on 23/10/2019.
//

#ifndef CLASE23_10_2019_PROFESOR_H
#define CLASE23_10_2019_PROFESOR_H

#include "type.h"

class profesor_t{
    texto nombre;
    texto apellido;
    numerico edad;
public:
    profesor_t();
    profesor_t(texto nombre,texto apellido. );
    profesor_t(c_alumnno& alumnno);
    texto get_nombre();
    texto get_apellidos();
    numerico get_edad();
};
#endif //CLASE23_10_2019_PROFESOR_H

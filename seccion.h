//
// Created by Jean Pierre on 23/10/2019.
//

#ifndef CLASE23_10_2019_SECCION_H
#define CLASE23_10_2019_SECCION_H

#include "funciones.h"

class seccion_t{
    c_alumnno* lista_alumnos;
    size_t cantidad;
public:
    seccion_t(size_t n);
    seccion_t(seccion_t& seccion);
    void set_alumno(size_t indice, const c_alumnno alumno);
    void imprimir_lista();
    ~seccion_t();
};
#endif //CLASE23_10_2019_SECCION_H

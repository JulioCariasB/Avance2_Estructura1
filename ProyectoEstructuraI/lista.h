#ifndef LISTA_H
#define LISTA_H
#include "archivo.h"
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;


class Lista
{
public:
    Lista();
    int cant;
    Archivo * Inicio;
    void CrearArchivo(string Nombre, int Tipo);
    Archivo * Buscar(string Nombre);
    void Imprimir();
};

#endif // LISTA_H

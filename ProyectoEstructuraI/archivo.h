
#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class Archivo
{
public:
    int Tipo;
    string Nombre;
    string Contenido;
    Archivo * Siguiente;
    Archivo * Anterior;
    Archivo(string Nom, int Ti);
};

#endif // ARCHIVO_H

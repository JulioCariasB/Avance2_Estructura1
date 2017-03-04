#ifndef ARCHIVOTEXTO_H
#define ARCHIVOTEXTO_H
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>


using namespace std;

class ArchivoTexto
{
public:
    ArchivoTexto(string Nombre);
    string Nombre;
    string Contenido;
};

#endif // ARCHIVOTEXTO_H

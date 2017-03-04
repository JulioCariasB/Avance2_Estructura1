#include "archivo.h"

Archivo::Archivo(string Nom, int Ti)
{
    Nombre = Nom;
    Tipo = Ti;
    Contenido = "";
    Siguiente = NULL;
}

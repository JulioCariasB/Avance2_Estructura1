#ifndef FOLDER_H
#define FOLDER_H
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class Folder
{
public:
    Folder(string Nombre);
    Lista * Archivos;
    string Nombre;

};

#endif // FOLDER_H

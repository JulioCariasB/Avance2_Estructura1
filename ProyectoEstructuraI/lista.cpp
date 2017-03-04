#include "lista.h"
#include <stdio.h>

Lista::Lista()
{
    Inicio = NULL;
    cant =0;
}

void Lista::CrearArchivo(string Nom, int Ti)
{
    if(Inicio == NULL){
        Inicio = new Archivo(Nom, Ti);
        cant++;
    }else{
        if(Buscar(Nom)== NULL){
            Archivo * Temp = Inicio;
            while(Temp->Siguiente!=NULL){
                Temp = Temp->Siguiente;
            }
            Temp->Siguiente = new Archivo(Nom, Ti);
            cant++;
        }
    }
}

Archivo * Lista::Buscar(string Nom)
{
    if(Inicio == NULL){
        return NULL;
    }else{
        if(Inicio->Nombre==Nom){
            return Inicio;
        }
        Archivo * Temp = Inicio;
        while(Temp->Siguiente != NULL){
            if(Temp->Nombre==Nom){
                return Temp;
            }
            Temp = Temp->Siguiente;
        }
    }
    return NULL;
}

void Lista::Imprimir()
{
    Archivo * Temp = Inicio;
    while(Temp->Siguiente != NULL){
        if(Temp->Tipo==1){
            printf("FOLDER\n");
        }else{
            printf("TXT\n");
        }
        Temp = Temp->Siguiente;
    }
    if(Temp->Tipo==1){
        printf("FOLDER\n");
    }else{
        printf("TXT\n");
    }
}

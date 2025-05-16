#ifndef GUARDARCLIENTE_H_INCLUDED
#define GUARDARCLIENTE_H_INCLUDED
#include "Estructura.h"

void guardarClientes(struct Cliente Persona[], int cantidad,int Cuenta);

void guardarClientes(struct Cliente Persona[], int cantidad,int Cuenta){
    /*
    FILE* f = fopen("clientes.txt","a");
    //for(int i = 0; i<cantidad; i++){
        if(f != NULL){
            fprintf(f, "{nCliente: %d\n",Persona[Cuenta].NoCliente);
            fprintf(f, "NIP: %d\n",Persona[Cuenta].NIP);
            fprintf(f, "Nombre: %s\n",Persona[Cuenta].Nombre);
            fprintf(f, "Saldo: %.2f}\n",Persona[Cuenta].Saldo);
            fclose(f);
            f = NULL;



        }
    //}

    */
    FILE *f;
    if(fopen("clientes.txt","r") == NULL){
        f = fopen("clientes.txt","a");
        for(int i = 0; i<cantidad; i++){
            if(f != NULL){
            fprintf(f, "{nCliente: %d\n",Persona[i].NoCliente);
            fprintf(f, "NIP: %d\n",Persona[i].NIP);
            fprintf(f, "Nombre: %s\n",Persona[i].Nombre);
            fprintf(f, "Saldo: %.2f}\n",Persona[i].Saldo);

            }
        }
        fclose(f);
        f = NULL;

    }




}

#endif // GUARDARCLIENTE_H_INCLUDED

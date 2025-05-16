#include<stdio.h>
#include<windows.h>
#include "ATM.h"
#include "Estructura.h"
#include "GuardarCliente.h"







int main(){

    struct Cliente Persona[3]={
        {1,1000,"Christian",123},
        {2,2000,"Nicole",321},
        {3,10000,"Juan",777}
    };

	int respuesta,salir=0,numCuenta=0,contador=0;
	//float saldo[3]={1000,2000,10000};
	guardarClientes(Persona,3,numCuenta);

	do{
		if(contador==0){
			numCuenta=SeleccionCuenta();
			contador++;
		}

		system("cls");
		printf("1 - Consulta de saldo\n");
		printf("2 - Depositar dinero a mi cuenta\n");
		printf("3 - Retirar dinero\n");
		printf("4 - Seleccionar otra cuenta\n");
		printf("5 - Salir\n\n");
		printf("Ingrese el numero de la opcion que desea ralizar: ");
		scanf("%d",&respuesta);
		switch(respuesta){
			case 1:
				//ConsultarSaldo(Persona,3);
				break;

			case 2:
				Persona[numCuenta].Saldo+=DepositarDinero();
				guardarClientes(Persona,3,numCuenta);
				break;

			case 3:
				//saldo[numCuenta]-=RetirarDinero(saldo[numCuenta]);
				break;

			case 4:
				contador=0;
				break;

			case 5:
				salir=1;
				break;

			default:
				printf("\n\nRespuesta no valida, intentalo de nuevo\n");
				system("pause");
				break;
		}
	} while(salir!=1);

	return 0;
}



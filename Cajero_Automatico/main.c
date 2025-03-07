#include<stdio.h>
#include<windows.h>
#include "ATM.h"





int main(){
	int respuesta,salir=0,numCuenta=0,contador=0;
	float saldo[3]={1000,2000,10000};

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
				ConsultarSaldo(saldo[numCuenta]);
				break;

			case 2:
				saldo[numCuenta]+=DepositarDinero();
				break;

			case 3:
				saldo[numCuenta]-=RetirarDinero(saldo[numCuenta]);
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



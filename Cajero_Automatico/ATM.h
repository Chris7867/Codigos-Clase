#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

int SeleccionCuenta();
void ConsultarSaldo(float saldo);
float DepositarDinero();
float RetirarDinero(float x);
float Validacion(float a);


void ConsultarSaldo(float saldo){
	system("cls");
	printf("\nSu saldo es: $%.2f\n\n",saldo);
	system("pause");
}

float Validacion(float a){
	if(a<0){
		printf("\nEl valor ingresado no debe ser negativo, intentalo de nuevo\n");
		return 0;
	}
	else if(a==0){
		printf("El valor ingresado no debe ser 0, intentalo de nuevo\n");
		return 2;
	}
	else{
		return 1;
	}
}

float DepositarDinero(){
	float deposito,ciclo;
	do{
		system("cls");
		printf("Ingrese la cantidad de dinero que desea depositar: ");
		scanf("%f",&deposito);
		ciclo = Validacion(deposito);
		//printf("%f",ciclo);
		system("pause");
	} while(ciclo!=1);
	printf("\n\n------ Operacion Exitosa -----\n");
	system("pause");
	return deposito;
}

float RetirarDinero(float x){
	float retiro=0, ciclo,contador=0;
	do{
		system("cls");
		if(x==0){
			printf("Actualmente su cuenta esta en 0, realice un deposito para poder retirar\n");
			system("pause");
			break;
		}
		printf("Ingrese la cantidad de dinero que desea retirar: ");
		scanf("%f",&retiro);
		ciclo = Validacion(retiro);
		//printf("%f",ciclo);
		if(retiro<=x && retiro>0){
			printf("\n\n------ TOME SU DINERO -----\n");
			system("pause");
			break;
		}
		else{
			printf("\n\nNo cuenta con el saldo sufieciente en su cuenta, verifique la cantidad e intentelo de nuevo\n");

		}
		system("pause");
	} while(1);

	return retiro;
}

int SeleccionCuenta(){
	int cuenta;
	system("cls");
	printf("----- Seleccione la cuenta que desea consultar -----");
	printf("\nCuenta 1");
	printf("\nCuenta 2");
	printf("\nCuenta 3");
	printf("\n\nIngrese la cuenta que desea consultar: ");
	scanf("%d",&cuenta);
	return cuenta-1;
}

#endif // ATM_H_INCLUDED

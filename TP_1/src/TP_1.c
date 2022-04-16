/*
 ============================================================================
 Name        : TP_1.c
 Author      : Kevin Chretien
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "calcular.h"
//biblioteca calcular
//menu
//calculos
//mostrar

#define DESC 25
#define INTE 10


int main(void) {

	setbuf(stdout, NULL);


	char salir='n';//para permanecer en el menu
	int flag1=0;  	//bandera km
	int flag2=0; 	//bandera precio
	int flag3=0;	//bandera calcular

	int kilometros;
	float latam;
	float aerolineas;

	//LATAM
	float resultDebitoLatam;
	float resultCreditoLatam;
	float resultBitcoinLatam;
	float resultUnitarioLatam;
	//AEROLINEAS ARGENTINAS
	float resultDebitoAA;
	float resultCreditoAA;
	float resultBitcoinAA;
	float resultUnitarioAA;


	float diferenciaPrecio;
	    do{
	    	system("cls");
	    	switch(menu())
	    	{
	    		case 1:

	    				if(flag1==0){
	    			printf("Ingresar Kilometros: ");
	    			fflush(stdin);
	    			scanf("%d", &kilometros);
	    				}

	    			flag1=1;




	    			break;
	    		case 2:
	    			if(flag1==1){
	    				printf("Ingresar precio del vuelo:\n");
	    				printf("\nLATAM: ");
	    				fflush(stdin);
	    				scanf("%f", &latam);
	    				printf("\nAEROLINEAS ARGENTINAS: ");
	    				fflush(stdin);
	    				scanf("%f", &aerolineas);
	    			}
	    			else
	    			{
	    				printf("PRIMERO INGRESE LOS KM \n");
	    				getch();
	    				system("\npause");

	    			}
	    			flag2=1;
	    			break;
	    		case 3:
	    			if(flag1==1 && flag2 == 1)
	    			{
	    				printf("Calculando...\n\n");


	    				resultDebitoLatam=debito(latam , DESC);
	    				resultCreditoLatam=credito(latam, INTE);
	    				resultBitcoinLatam=bitcoin(latam);
	    				resultUnitarioLatam=unitario(latam, kilometros);

	    				resultDebitoAA=debito(aerolineas, DESC);
	    				resultCreditoAA=credito(aerolineas,INTE);
	    				resultBitcoinAA=bitcoin(aerolineas);
	    				resultUnitarioAA=unitario(aerolineas, kilometros);

	    				diferenciaPrecio=resta(latam,aerolineas);
	    				//getch();
	    				system("\npause");
	    			}
	    			else if(flag1==0)
	    			{
	    				printf("PRIMERO INGRESE LOS KM \n");
	    				//getch();
	    				system("\npause");
	    			}
	    			else
	    			{
	    				printf("PRIMERO INGRESE EL PRECIO DE LOS VUELO \n");
	    				//getch();
	    				system("\npause");
	    			}

	    			flag3=1;
	    			break;
	    		case 4:
	    			if(flag1==1 && flag2==1 && flag3==1)
	    			{
	    				system("cls");

	    				printf("\n Kilometros: %d", kilometros);


	    				printf("\nPrecio LATAM: $%.2f\n", latam);
	    				printf("\na)Precio con tarjeta de debito: %.2f", resultDebitoLatam);
	    				printf("\nb)Precio con tarjeta de credito: %.2f", resultCreditoLatam);
	    				printf("\nc)Precio pagado con bitcoin: %f", resultBitcoinLatam);
	    				printf("\nd)Precio unitario: %.2f", resultUnitarioLatam);

	    				printf("\n\nPrecio AEROLINEAS ARGENTINA $%.2f \n", aerolineas);
	    	 			printf("\na)Precio con tarjeta de debito: %.2f", resultDebitoAA);
	   				   	printf("\nb)Precio con tarjeta de credito: %.2f", resultCreditoAA);
	    				printf("\nc)Precio pagado con bitcoin: %f", resultBitcoinAA);
	    				printf("\nd)Precio unitario: %.2f", resultUnitarioAA);
	    				printf("\n\n");
	    				printf("\ne)Diferencia de Precio: %.2f", diferenciaPrecio);
	    				//system("\npause");
	    				getch();
	    			}
	    			else if(flag1==0)
	    				{
	    			 		printf("PRIMERO INGRESE LOS KM \n");
	    			 		//getch();
	    			 		system("\npause");
	    	   			}
	    			else if(flag2==0)
	   	    			{
	    					printf("PRIMERO INGRESE EL PRECIO DE LOS VUELO \n");
	    					//getch();
	    					system("\npause");
	  	    			}
	    			else
	    			{
	    				printf("PRIMERO DEBE CALCULAR \n");
	    				system("\npause");
	    				//getch();
	    			}

	    			flag1=0;
	    			flag2=0;
	    			flag3=0;

	    			break;
	    		case 5:
	    			printf("\nhacer harcodeo\n");
	    			//getch();
	    			kilometros=7090;
	    			latam=159339;
	    			aerolineas=162965;

	    			resultDebitoLatam=debito(latam , DESC);
	    			resultCreditoLatam=credito(latam, INTE);
	    			resultBitcoinLatam=bitcoin(latam);
	    			resultUnitarioLatam=unitario(latam, kilometros);

	    			resultDebitoAA=debito(aerolineas, DESC);
	    			resultCreditoAA=credito(aerolineas,INTE);
	    			resultBitcoinAA=bitcoin(aerolineas);
	    			resultUnitarioAA=unitario(aerolineas, kilometros);

	    			diferenciaPrecio=resta(latam,aerolineas);
	    			system("\npause");
	    			getch();
	    			flag1=1;
	    			flag2=1;
	    			flag3=1;
	    			break;
	    		case 6:
	    			printf("Salir s/n");
	    			fflush(stdin);
	    			scanf("%c", &salir);
	    			break;
	    		default:
	    			printf("\nOpcion invalida");
	    			printf("\nOpcion invalida");
	    			printf("\nOpcion invalida");
	    			system("\npause");

	    	}
	    }while(salir != 's');

	    flag1=0;
	   	flag2=0;
	   	flag3=0;


	return EXIT_SUCCESS;
}

//FUNCION MENU PASAR A BIBLIOTECA.




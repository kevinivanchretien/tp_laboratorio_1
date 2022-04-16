/*
 * calcular.c
 *
 *  Created on: 14 abr. 2022
 *      Author: kevin
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "calcular.h"

int menu()
{
	int opcion;
	printf("\n\nMenu\n");
		    printf("1.Igresar Kilometros.\n");
		    printf("2.Ingresar Precio de vuelos.\n");//submenu LATAM Y AEROLINEAS
		    printf("3.Calcular.\n");//biblioteca de calculos.
		    printf("4.Informar Resultados.\n");//limpiar pantalla y mostrar resultados
		    printf("5.Carga Forzada de datos.\n");//hardcodeo
		    printf("6.Salir.\n\n");
		    fflush(stdin);
		    scanf("%d", &opcion);
	return opcion;
}

/*
 * 1- CALCULAR DEBITO (descuento del 10%)
 * 2- CALCULAR CREDITO (interes del 25%)
 * 3- CALCULAR BITCOIN (1 BITCOIN = $4606954.55 argentinos)
 * 4- CALCULAR PRECIO POR KILOMETRO.
 * 5- DIFERENCIA DE PRECIO.
 * MOSTRAR EN LA OPCION 4.
*/
float debito(float precio, int descuento)
{
	float resultado;

	resultado = (precio*descuento)/100;
	resultado = precio - resultado;

	return resultado;
}



float credito(float precio, int interes)
{
	float resultado;

	resultado = (precio*interes)/100;
	resultado = precio + resultado;


	return resultado;
}

float bitcoin(float precio)
{
	float Bitcoin =4606954.55;
	int P=1;
	float resultado;


	resultado= (P * precio) / Bitcoin;

	return resultado;
}


float unitario(float precio, int kilometros)
{
	float resultado;

	resultado= precio / kilometros;

	return resultado;
}

float resta(float latam, float aerolineas)
{
	float resultado;

	if(latam > aerolineas)
	{
		resultado= latam-aerolineas;
	}
	else
	{
		resultado= aerolineas-latam;
	}
	return resultado;
}


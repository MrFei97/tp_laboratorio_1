/*
 * menu.c
 *
 *  Created on: 20 sep. 2021
 *      Author: Fernando, Ivan Torres
 */

#include "funciones.h"

void menu(float numeroA, float numeroB){

int respuesta;
float resultado;

do{

printf("\n1-Sumar\n2-Resta\n3-Division\n4-Multiplicacion\n5-Factoriales\n6-Mostrar todos los resultados\n0-Salir\nRespuesta: ");
scanf("%d", &respuesta);

printf("\n\n\n");


switch(respuesta){

case 0:

	break;

case 1:

	resultado = suma(numeroA, numeroB);

	printf("El resultado de %.2f + %.2f es %.2f", numeroA, numeroB, resultado);

	break;

case 2:

	resultado = resta(numeroA, numeroB);

	printf("El resultado de %.2f - %.2f es %.2f", numeroA, numeroB, resultado);

	break;

case 3:

	resultado = division(numeroA, numeroB);

	if(resultado != 0){
	printf("El resultado de %.2f / %.2f es %.2f", numeroA, numeroB, resultado);
	}

	break;

case 4:

	resultado = multiplicacion(numeroA, numeroB);

	printf("El resultado de %.2f * %.2f es %.2f", numeroA, numeroB, resultado);

	break;

case 5:

	resultado = factorial(numeroA);

	if(resultado != -1){

	printf("El factorial de %.2f es %.2f\n", numeroA, resultado);

	}

	resultado = factorial(numeroB);

	if(resultado != -1){

	printf("El factorial de %.2f es %.2f\n", numeroB, resultado);

	}

	break;

case 6:

	resultado = suma(numeroA, numeroB);

	printf("El resultado de %.2f + %.2f es %.2f\n", numeroA, numeroB, resultado);

	resultado = resta(numeroA, numeroB);

	printf("El resultado de %.2f - %.2f es %.2f\n", numeroA, numeroB, resultado);

	resultado = division(numeroA, numeroB);

	if(resultado != 0){
	printf("El resultado de %.2f / %.2f es %.2f\n", numeroA, numeroB, resultado);
	}

	resultado = multiplicacion(numeroA, numeroB);

	printf("El resultado de %.2f * %.2f es %.2f\n", numeroA, numeroB, resultado);

	resultado = factorial(numeroA);

	if(resultado != -1){

	printf("El factorial de %.2f es %.2f\n", numeroA, resultado);

	}

	resultado = factorial(numeroB);

	if(resultado != -1){

	printf("El factorial de %.2f es %.2f\n", numeroB, resultado);

	}

	break;

default:

	printf("Opcion no valida, reintente");

	break;
}

printf("\n");
system("pause");
printf("\n\n");

}while(respuesta != 0);



}

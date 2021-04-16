/*
 ============================================================================
 Name        : TP.c
 Author      : Torres, Fernando Ivan
 Version     :
 Copyright   : 
 Description : Trabajo Practico 1
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {

	setbuf(stdout, NULL);

int numero1;
int numero2;
char repuestaDelMenu;
int resultado;

printf("Por favor, ingrese el primero numero: \n");
scanf("%d", &numero1);

printf("Por favor, ingrese el segundo numero: \n");
scanf("%d", &numero2);

printf("Numero A: %d\n", numero1);
printf("Numero B: %d\n", numero2);


printf("1-Sumar valores\n2-Restar valores\n3-Multiplicar valores\n4-Dividir valores\n5-Factorizar valores\n6-Todas las opciones\n");


printf("Que desea hacer: ");
__fpurge(stdin);
scanf("%c", &repuestaDelMenu);


switch(repuestaDelMenu)
{

case '1':
	resultado = sumaDeNumeros(numero1, numero2);

	printf("Resultado de la operacion: %d", resultado);

	break;

case '2':

	resultado = restaDeNumeros(numero1, numero2);

	printf("Resultado de la operacion: %d", resultado);

	break;

case '3':
	resultado = multiplicacionDeNumeros(numero1, numero2);

	printf("Resultado de la operacion: %d", resultado);

	break;

case '4':


	divisionDeNumeros(numero1, numero2);

	break;

case '5':

	resultado = factorialDeUnNumero(numero1);

	printf("Resultado de la operacion con numero A: %d \n", resultado);

	resultado = factorialDeUnNumero(numero2);

	printf("Resultado de la operacion con numero B: %d", resultado);

	break;

case '6':

	resultado = sumaDeNumeros(numero1, numero2);

	printf("Suma: %d\n", resultado);

	resultado = restaDeNumeros(numero1, numero2);

	printf("Resta: %d\n", resultado);

	resultado = multiplicacionDeNumeros(numero1, numero2);

	printf("Producto: %d\n", resultado);

	divisionDeNumeros(numero1, numero2);


	resultado = factorialDeUnNumero(numero1);

	printf("Resultado de la operacion con numero A: %d \n", resultado);

	resultado = factorialDeUnNumero(numero2);

	printf("Resultado de la operacion con numero B: %d", resultado);

	break;
}


	return EXIT_SUCCESS;
}

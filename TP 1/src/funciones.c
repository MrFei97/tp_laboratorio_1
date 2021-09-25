/*
 * funciones.c
 *
 *  Created on: 20 sep. 2021
 *      Author: Fernando, Ivan Torres
 */

#include "funciones.h"

float suma(float numeroA, float numeroB){

float resultado;

resultado = numeroA + numeroB;

return resultado;

}

float resta(float numeroA, float numeroB){

float resultado;

resultado = numeroA - numeroB;

return resultado;

}

float division(float numeroA, float numeroB){

float resultado;

if(numeroB == 0){

printf("Division por 0 no valida.");

resultado = 0;

}

else{

resultado = numeroA/numeroB;

}

return resultado;
}

float multiplicacion(float numeroA, float numeroB){

float resultado;

resultado = numeroA * numeroB;

return resultado;

}

float factorial(float numero){

	float resultado;

	if(numero>=14){

	printf("Numero muy grande para calcular, limitacion de sistema.\n");

	resultado = -1;

	}

	else{

	if(numero < 0){

		printf("No se puede calcular numeros negativos.\n");

		resultado = -1;

	}

	else{

		float aux = 1;

		int i;

		for(i = 1; i<numero; i++){



			aux = aux * i;

		    }

		resultado = numero * aux;
		}

	}



return resultado;

}

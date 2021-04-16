/*
 * calculos.c
 *
 *  Created on: 12 abr. 2021
 *      Author: Torres, Fernando Ivan
 */


#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int sumaDeNumeros(int numero1, int numero2){

int resultado;

resultado = numero1 + numero2;

return resultado;


}

int restaDeNumeros(int numero1, int numero2){

int resultado;

resultado = numero1 - numero2;


return resultado;
}

int multiplicacionDeNumeros(int numero1, int numero2){

int resultado;

resultado = numero1 * numero2;


return resultado;
}

void divisionDeNumeros(int numero1, int numero2){

float resultado;

if(numero2 == 0){

printf("ERROR CUENTA IMPOSIBLE DE REALIZAR.\n");

}

else{

resultado = (float)numero1 / (float)numero2;

printf("El resultado de la division es: %.2f\n", resultado);

}


}

int factorialDeUnNumero(int numeroIngresado){

int resultado;

resultado = 1;

for(int i = 1; i <= numeroIngresado; i++){

	resultado = resultado * i;

}

return resultado;


}

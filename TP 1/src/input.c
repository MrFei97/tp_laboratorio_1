/*
 * ingresoNumeros.c
 *
 *  Created on: 20 sep. 2021
 *      Author: Fernando, Ivan Torres
 */

#include "input.h"

float getFloat(char* mensaje){

	float flotante;

	printf(mensaje);
	scanf("%f", &flotante);


	return flotante;
}

/*
 ============================================================================
 Name        : TP.c
 Author      : Fernando, Ivan Torres
 Description : Trabajo Practico N°1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


#include "input.h"
#include "menu.h"

int main(void) {
	setbuf(stdout, NULL);

	float numeroA;
	float numeroB;

	numeroA = getFloat("Ingrese el numero A: ");
	numeroB = getFloat("Ingrese el numero B: ");

	printf("Numero A: %.2f \nNumero B: %.2f\n", numeroA, numeroB);

	menu(numeroA, numeroB);

	return EXIT_SUCCESS;
}


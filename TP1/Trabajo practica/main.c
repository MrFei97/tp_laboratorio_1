#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main()
{

    float num1;
    float num2;
    float result;
    float result2;
    char respues;



    do{

    printf("Ingrese primer numero: \n");
    fflush(stdin);
    scanf("%f", &num1);
    printf("Ingrese segundo numero: \n");
    fflush(stdin);
    scanf("%f", &num2);


        printf("Elija una opcion por favor.\n");
        printf("1) Sumarlos.\n");
        printf("2) Restarlos.\n");
        printf("3) Multiplicarlos.\n");
        printf("4) Dividirlos.\n");
        printf("5) Factorizarlos.\n");
        printf("6) Salir.\n");
        fflush(stdin);
        scanf("%c", &respues);


        switch(respues){


        case '1':

           result = sumaDeNumeros(num1, num2);
          printf("Su resultado es %.2f \n", result);

        break;

        case '2':

        result = resta(num1, num2);
         printf("Su resultado es %.2f \n", result);

        break;

        case '3':
        /** \brief
         *
         * \param num1
         * \param num2
         * \return result=
         *
         */
        result = multiplicar(num1, num2);

         printf("Su resultado es %.2f \n", result);
        break;

        case '4':

        if(num1==0){

            printf("No es posible hacer esta division.");

        }

        else{
        result = dividir(num1, num2);
         printf("Su resultado es %.2f \n", result);

        }

        break;

        case '5':

       result = factorial(num1);

       result2 = factorial(num2);

       printf("Su resultado de %.0f es %.2f \n", num1, result);

       printf("Su resultado de %.0f es %.2f \n", num2, result2);

        break;

        case '6':

        printf("¿Desea salir?\n");
        fflush(stdin);
        scanf("%c", &respues);
        break;

        default:

            printf("No es una opcion valida\n");

        break;

        }





 system("pause");
 system("cls");

    }while(respues != 's');



    return 0;

}

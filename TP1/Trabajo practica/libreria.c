#include "libreria.h"


float sumaDeNumeros(float num1, float num2){

float total;

total = num1 + num2;

return(total);
}


float resta(float num1, float num2){

float result;

result = num1 - num2;

return(result);

}


float multiplicar(float num1, float num2){

    float result;

result = num1 * num2;

return(result);

}


float dividir(float num1, float num2){

float result;

result = num1 / num2;


return(result);


}


float factorial(float num) {

   float result;

    if(num==1){
        return 1;
    }
    else {
    result=num*factorial(num-1);

    return(result);

}
}

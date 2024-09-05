#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ejercicio2.h"

void validacion(int *m, int *n){
    int c;

    printf("Ingrese el numero a sumar: ");
    while(scanf("%d", m) != 1){
        printf("Por favor ingrese un numero: ");
        while ((c = getchar()) != '\n' && c != EOF);
    };

    printf("Ingrese la cantidad de repeticiones: ");
    while(scanf("%d", n) != 1){
        printf("Por favor ingrese un numero: ");
        while ((c = getchar()) != '\n' && c != EOF);
    };


}
int main(){
    int *m = malloc(sizeof(int));
    int *n = malloc(sizeof(int));
    int resultado;

    validacion(m, n);
    resultado = sumas_sucesivas(*m, *n);
    printf("Resultado: %d", resultado);

    free(m);
    free(n);
    return 0;
}

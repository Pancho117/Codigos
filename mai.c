#include <stdio.h>

int main() {
    int numero;
    int contadorPares = 0;
    int contadorImpares = 0;

    printf("Ingrese un número (ingrese un número negativo para terminar): \n");

    while (1) {
        scanf("%d", &numero);
        if (numero < 0) {
            break;
        }
         if (numero == 0) {
            continue;
        }

       
        if (numero % 2 == 0) {
            contadorPares++;
        } else {
            contadorImpares++;
        }
    }

   
    printf("Cantidad de números pares: %d\n", contadorPares);
    printf("Cantidad de números impares: %d\n", contadorImpares);

    return 0;
}

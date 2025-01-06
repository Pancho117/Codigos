#include <stdio.h>

int main() {
   float diametro, altura;
    float sumaDiametros = 0.0, sumaAlturas = 0.0;
    int contador = 0;
    char respuesta;

    do {
        
        printf("Ingrese el diámetro del tronco de ciprés (en cm): ");
        scanf("%f", &diametro);
        printf("Ingrese la altura del tronco de ciprés (en cm): ");
        scanf("%f", &altura);

  
        sumaDiametros += diametro;
        sumaAlturas += altura;
        contador++;

       
        printf("¿Desea ingresar otro tronco? (S/N): ");
        scanf(" %c", &respuesta); 

    } while (respuesta == 'S' || respuesta == 's');

    
    if (contador > 0) {
        float promedioDiametro = sumaDiametros / contador;
        float promedioAltura = sumaAlturas / contador;

        printf("Promedio de diámetro de los troncos: %.2f cm\n", promedioDiametro);
        printf("Promedio de altura de los troncos: %.2f cm\n",promedioAltura);
    } else {
        printf("No se ingresaron troncos.\n");
    }

    return 0;
}

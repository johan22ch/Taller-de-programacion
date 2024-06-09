#include <stdio.h>

int main() {
    int numero;
    int esPrimo = 1; // Suponemos que el número es primo al principio

    // Ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Asegurar si el número es menor o igual a 1
    if (numero <= 1) {
        printf("%d no es primo.\n", numero);
        return 0;
    }

    // Verificar si el número es primo utilizando un bucle for
    for (int i = 2; i <= numero / 2; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        if (numero % i == 0) {
            esPrimo = 0; // Si encuentra un divisor, el número no es primo
            break;
        }
    }

    // Imprimir el resultado
    if (esPrimo) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int contadorPrimos = 0;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegurar si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Contar cuántos números primos hay desde 1 hasta n
    for (int i = 2; i <= n; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        if (esPrimo(i)) {
            contadorPrimos++;
        }
    }

    // Imprimir el resultado
    printf("Hay %d números primos desde 1 hasta %d.\n", contadorPrimos, n);

    return 0;
}
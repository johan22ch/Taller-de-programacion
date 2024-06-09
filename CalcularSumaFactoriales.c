#include <stdio.h>

// Calcular el factorial de un número
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    // Ingrese el valor de n
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    // Asegurar si n es positivo
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de los factoriales de los primeros n números
    int sumaFactoriales = 0;
    for (int i = 1; i <= n; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        sumaFactoriales += factorial(i);
    }

    // Imprimir el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, sumaFactoriales);

    return 0;
}
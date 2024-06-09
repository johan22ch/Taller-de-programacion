#include <stdio.h>

// Calcular el n-ésimo número triangular
int calcularNumeroTriangular(int n) {
    int numeroTriangular = 0;
    for (int i = 1; i <= n; i++) { //For proporciona una estructura compacta y fácil de entender para realizar iteraciones desde 1 hasta n
        numeroTriangular += i;
    }
    return numeroTriangular;
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

    // Calcular el n-ésimo número triangular
    int numeroTriangular = calcularNumeroTriangular(n);

    // Imprimir el resultado
    printf("El número triangular de %d es: %d\n", n, numeroTriangular);

    return 0;
}
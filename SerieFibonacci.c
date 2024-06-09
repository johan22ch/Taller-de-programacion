#include <stdio.h>

void fibonacci(int n) {
    // Primeros dos términos de la serie de Fibonacci
    int a = 0, b = 1, siguiente;
    
    // Imprimir los primeros n términos de la serie de Fibonacci
    for (int i = 0; i < n; i++) { //For lo utilize para conbinar con el if 
        if (i <= 1) {
            siguiente = i;
        } else {
            siguiente = a + b;
            a = b;
            b = siguiente;
        }
        printf("%d ", siguiente);
    }
    printf("\n");
}

int main() {
    int n = 10;
    printf("Los primeros %d elementos de la serie de Fibonacci son:\n", n);
    fibonacci(n);
    return 0;
}

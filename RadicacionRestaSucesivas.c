#include <stdio.h>

// Función para calcular el cubo de un número
int cubo(int x) {
    return x * x * x;
}

// Función para calcular la raíz cúbica mediante restas sucesivas
int raiz_cubica(int numero) {
    int contador = 0;
    int acumulado = 0;
    
    while (acumulado <= numero) { //while lo utilize para declara numero a variable
        contador++;
        acumulado = cubo(contador);
    }
    
    // El valor correcto de la raíz cúbica es uno menos que el contador final
    return contador - 1;
}

int main() {
    int numero = 27;
    int resultado = raiz_cubica(numero);
    printf("La raíz cúbica de %d es %d\n", numero, resultado);
    return 0;
}

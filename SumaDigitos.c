#include <stdio.h>

int suma_digitos(int numero) {
    int suma = 0;
    
    // Manejo de números negativos
    if (numero < 0) {
        numero = -numero;
    }

    // Sumar los dígitos del número
    for (; numero > 0; numero /= 10) {  //Utilize for ya que me da la facilidad de ejecutar este progrma
        suma += numero % 10;
    }

    return suma;
}

int main() {
    int numero = 12567;
    int resultado = suma_digitos(numero);
    printf("La suma de los dígitos de %d es %d\n", numero, resultado);
    return 0;
}

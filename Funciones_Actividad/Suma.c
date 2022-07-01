#include <stdio.h>
/*  Escribir una función que sume dos números. Implemente un programa
que la utilice */

// Creamos una funcion en donde pida los parametros a usar.
int suma(int x, int y){
    int sum = x + y;  // Establecemos una variable de tipo entero que va a contener la suma.
    return sum;
}

int main()
{
    // Creamos dos variables de tipo entero para que se pueda almacenar los numero que el usuario teclee.
    int n1;
    int n2;
    // Le pedimos al usuario que teclee los numeros a sumar.
    printf("Dime el primer numero a sumar: ");
    scanf("%d", &n1);
    printf("Dime el segundo numero a sumar: ");
    scanf("%d", &n2);
    // Imprimimos el resultado de la suma, despues de llamar a la funcion por los argumentos dados.
    printf("La suma total da igual a: %d", suma(n1, n2));
    return 0; //Finalizamos el programa
}
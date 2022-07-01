#include <stdio.h>
/* Ejercicio 2. Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función */

// Creamos una funcion que va a dividir el total de la suma entre la cantidad final de numeros.
float media(float a, int b){
    float prom; // La variable sera un float para que en caso de tener decimales poder plasmarlos.
    prom = (a/b);
    return prom;
}

int main()
{
    // Creamos 4 variables para el funcionamiento de cada una de las funciones del programa.
    float n;
    int i;
    int cant;
    float sum = 0;
    // Pedimos al usuario el total de numero que va a usar, en funcion de obtener la cantidad de numeros a dividir.
    printf("Dime la cantidad de numeros: ");
    scanf("%d", &cant);
    for(i = 1; i <= cant; i++)
    {  
        // Pedimos al usuario que introduzca los numeros, para poder sumarlos y obtener un total.
        printf("%d- Dime el numero: ", i);
        scanf("%f", &n);
        sum += n; // La variable sum va a contener el total de todos los numeros sumados dentro del for.
    }
    i = cant; // i tendra el valor final de la cantidad de veces que se repitio el bucle.
    // Imprimimos la media con ayuda de una funcion.
    printf("El resultado de la media aritemtica es; %.1f", media(sum, i));
    return 0; // Finalizo el programa
}
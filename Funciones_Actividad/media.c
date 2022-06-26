#include <stdio.h>
/* Ejercicio 2. Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función */

float media(float a, int b){
    float prom;
    prom = a/b;
    return prom;
}

int main()
{
    int n;
    int i;
    float cant;
    int sum = 0;

    printf("Dime la cantidad de numeros: ");
    scanf("%d", cant);
    for(i = 1; i <= cant; i++)
    {
        printf("%d- Dime el numero: ", i);
        scanf("%f", n);
        sum += n;
    }
    printf("El resultado de la media aritemtica es; %.1f", media(sum, i));
    return 0;
}
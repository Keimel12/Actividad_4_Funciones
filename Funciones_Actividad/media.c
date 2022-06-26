#include <stdio.h>
/* Ejercicio 2. Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función */

float media(int a, int b){
    int prom;
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
    scanf("%d", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d- Dime el numero: ", i);
        scanf("%f", cant);
        sum += cant;
    }
    printf("El resultado de la media aritemtica es; ", media(sum, i));
    return 0;
}
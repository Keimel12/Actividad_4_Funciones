#include <stdio.h>
/*  Escribir una función que sume dos números. Implemente un programa
que la utilice */

int suma(int x, int y){
    int sum = x + y;
    return sum;
}

int main()
{
    int n1;
    int n2;

    printf("Dime el primer numero a sumar: ");
    scanf("%d", &n1);
    printf("Dime el segundo numero a sumar: ");
    scanf("%d", &n2);
    printf("La suma total da igual a: %d", suma(n1, n2));
}
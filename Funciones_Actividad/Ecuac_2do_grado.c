#include <stdio.h>
#include <math.h>
/* Ejercicio 4. Escribir un programa que calcule y presente las raices reales de la ecuacion de 
segundo grado.
ax² + bx + c = 0.
Suponer que a,b y c son argumentos de coma flotante con valores dados y que x¹ y que x² son variables
en coma flotante. Suponer tambien que b > 4*a*c, de forma que las raices calculadas son siempre 
reales. */

float var1(float a, float b, float c) // Parametros
{
    float x1;

    x1 = ((-b) + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
    return x1;
}

float var2(float b, float a, float c) // Parametros
{
    float x2;



}

int main()
{
    //Argumentos
    float a;
    float b;
    float c;

    printf("Dime el valor que sera asignado a <a>: ");
    scanf("%f", &a);
    printf("Dime el valor que sera asignado a <b>: ");
    scanf("%f", &b);
    printf("Dime el valor que sera asignado a <c>: ");
    scanf("%f", &c);
    printf("El resultado de x¹ es: %.2f", var1(a, b, c));
   // printf("El resultado de x² es: %.2f", var)

    return 0;
}
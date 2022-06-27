#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Ejercicio 4. Escribir un programa que calcule y presente las raices reales de la ecuacion de 
segundo grado.
ax² + bx + c = 0.
Suponer que a,b y c son argumentos de coma flotante con valores dados y que x¹ y que x² son variables
en coma flotante. Suponer tambien que b > 4*a*c, de forma que las raices calculadas son siempre 
reales. */

float var1(float a, float b, float c) // Parametros
{
    float x1;
    float cont = pow(b, 2) - 4*a*c;

    if ((a == 0) || (cont < 0)){
        printf("\nNo se puede resolver");
        return 0;
    }

    if(cont > 0){
        x1 = (-b + sqrt(cont)) / (2*a);
        return x1;
    }
}

float var2(float a, float b, float c) // Parametros
{
    float x2;
    float cont = pow(b, 2) - (4*a*c);

    if ((a == 0) || (cont < 0)){
        printf("\nNo se puede resolver");
        return 0;
    }

    if(cont > 0){
        x2 = ((-b) - sqrt(cont)) / (2*a);
        return x2;
    }
    
}

int main()
{
    //Argumentos
    float a;
    float b;
    float c;
    char option;

    do
    {
    printf("Dime el valor que sera asignado a <a>: ");
    scanf("%f", &a);
    printf("Dime el valor que sera asignado a <b>: ");
    scanf("%f", &b);
    printf("Dime el valor que sera asignado a <c>: ");
    scanf("%f", &c);

    printf("\nEl resultado de x1 es: %.2f", var1(a, b, c));
    printf("\nEl resultado de x2 es: %.2f", var2(a, b, c));

    getchar();
    printf("\nQuieres continuar? Presione <s> para continuar: ");
    scanf("%c", &option);
    system("cls");
    } while (option == 's' || option == 'S');
    printf("Programa finalizado!!");
    return 0;
}
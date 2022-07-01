#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Ejercicio 4. Escribir un programa que calcule y presente las raices reales de la ecuacion de 
segundo grado.
ax² + bx + c = 0.
Suponer que a,b y c son argumentos de coma flotante con valores dados y que x¹ y que x² son variables
en coma flotante. Suponer tambien que b > 4*a*c, de forma que las raices calculadas son siempre 
reales. */

// Creamos una variable para la raiz real 1
float var1(float a, float b, float c)
{
    float x1;
    float cont = pow(b, 2) - 4*a*c; // cont obtendra el valor de la operacion mencionada.
    // En caso de cumplirse esta condicional significa que hay raices imaginarias en el programa.
    if ((a == 0) || (cont < 0)){
        printf("\nNo se puede resolver: ");
        return 0;
    }  
    // En caso de cumplir esta condicion es que solo hay una raiz real.
        if(cont == 0){
            printf("\nSolo posee una raiz real: ");
            x1 = (-b) / (2*a);
            return x1;
        }
    // En caso de cumplirse esta condicion es que hay dos raices reales en cada variable.
    if(cont > 0){
        printf("\nLas raiz real x1 es:");
        x1 = ((-b) + sqrt(cont)) / (2*a);
        return x1;
    }
}
// Creamos una variable para la raiz real 2
float var2(float a, float b, float c)
{
    float x2;
    float cont = pow(b, 2) - (4*a*c); // cont obtendra el valor de la operacion mencionada.
    // En caso de cumplirse esta condicional significa que hay raices imaginarias en el programa.
    if ((a == 0) || (cont < 0)){
        printf("\nNo se puede resolver: ");
        return 0;
    }
    // En caso de cumplir esta condicion es que solo hay una raiz real.
        if(cont == 0){
            printf("\nSolo posee una raiz real: ");
            x2 = (-b) / (2*a);
            return x2;
        }
    // En caso de cumplirse esta condicion es que hay dos raices reales en cada variable.
    if(cont > 0){
        printf("La raiz real de x2 es: ");
        x2 = ((-b) - sqrt(cont)) / (2*a);
        return x2;
    }
    
}

int main()
{
    // Creamos 3 opciones para permitir obtener las raices reales
    float a;
    float b;
    float c;
    char option; // Este char permitira al usuario terminar el programa cuando guste,

    do
    {
    //  Pedimos que el usuario teclee los numeros que sera asignados a las variables.
    printf("Dime el valor que sera asignado a <a>: ");
    scanf("%f", &a);
    printf("Dime el valor que sera asignado a <b>: ");
    scanf("%f", &b);
    printf("Dime el valor que sera asignado a <c>: ");
    scanf("%f", &c);
    // Invocando a dos funciones obtendremos las raices reales o ninguna.
    printf(" %.1f \n", var1(a, b, c));
    printf(" %.1f \n", var2(a, b, c));

    getchar();
    // El usuario decidira si seguir el programa.
    printf("\nQuieres continuar? Presione <s> para continuar: ");
    scanf("%c", &option); 
    system("cls"); // Esta funcion es para evitar que la terminal se llene de dialogos.
    } while (option == 's' || option == 'S');
    printf("Programa finalizado!!");
    return 0; //Finaliza el programa
}
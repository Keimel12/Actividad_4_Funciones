#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Ejercicio 3. Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria. */

int main()
{
    char total[62];
    char cadena1[31];
    char cadena2[31];
    char n;

    printf("Desea concatenar una cadena de caracteres? Presione <s> para continuar: ");
    scanf("%c", &n);
    do
    {
        printf("Escriba la primera cadena de caracteres (maximo 30 palabras): ");
        getchar();
        scanf(%"[^\n]", &cadena1);
        fflush(stdin);

        printf("Escriba la segunda cadena de caracteres (maximo 30 palabras): ");
        getchar();
        scanf(%"[^\n]", &cadena2);
        fflush(stdin);

        printf("\nQuieres continuar concatenando?: ");
        scanf("%c", &n);
    } while(n == 's' || n == 'S');

    printf("Programa finalizado");
    return 0;
}
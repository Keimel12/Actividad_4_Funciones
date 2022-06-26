#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Ejercicio 3. Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria. */

char *concatenar(char *total, char *cadena1, char *cadena2){
    strcpy(total, cadena1);
    strcat(cadena1, "");
    strcat(cadena1, cadena2);
    return cadena1;
}

char *vuelta(char *cadena1){
    return strrev(cadena1);
}

int main()
{
    char total[63];
    char cadena1[31];
    char cadena2[32];
    char n;

    do
    {
        printf("Escriba la primera cadena de caracteres (maximo 30 palabras): ");
        fflush(stdin);
        scanf("%[^\n]", &cadena1);
        getchar();

        printf("Escriba la segunda cadena de caracteres (maximo 30 palabras): ");
        fflush(stdin);
        scanf("%[^\n]", &cadena2);
        getchar();

        printf("\nEl resultado de concatenar fue: %s", concatenar(total, cadena1, cadena2));
        printf("\nLa vuelta a la concatenacion es: %s", vuelta(cadena1));

        printf("\nQuieres continuar concatenando? Presione <s> para continuar: ");
        scanf("%c", &n);
        system("cls");
    } while(n == 's' || n == 'S');

    printf("Programa finalizado");
    return 0;
}
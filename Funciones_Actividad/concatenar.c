#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Ejercicio 3. Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria. */

// Creamos una funcion para poder concatenar la cadena de caracteres
char *concatenar(char *total, char *cadena1, char *cadena2){
    strcpy(total, cadena1); // Esta funcion nos permite copiar el contenido de una cadena.
    strcat(cadena1, ""); // La funcion strcat nos permite concatenar dos cadenas de caracteres.
    strcat(cadena1, cadena2);
    return cadena1;
}
// Establecemos una funcion para obtener el reverso de la cadena de caracteres.
char *vuelta(char *cadena1){
    return strrev(cadena1); // La funcion strrev devuelve el reverso de una cadena de caracteres cualquiera.
}

int main()
{
    // Creamos 3 variables de tipo char para poder concatenar las palabras.
    char total[63];
    char cadena1[31];
    char cadena2[32];
    char n; //n nos serviras para comenzar mientras se cumplan la condicion.
    do
    {
        //Le pedimos al usuario que escriba las cadenas de caracteres.
        printf("Escriba la primera cadena de caracteres (maximo 30 palabras): ");
        fflush(stdin); // Nos apoyamos de esta funcion para eliminar la basura del buffer.
        scanf("%31[^\n]", &cadena1); // Usamos una alternativa de gets (Explicacion en la linea 49).
        getchar();

        printf("Escriba la segunda cadena de caracteres (maximo 30 palabras): ");
        fflush(stdin);
        scanf("%32[^\n]", &cadena2); // Este scanf va a leer toda la cadena de caracteres (hasta el limite de 32), o hasta que se teclee un salto de linea.
        getchar();
        // Imprimimos el resultado de la cadena y el inverso mediante invocar unas funciones.
        printf("\nEl resultado de concatenar fue: %s", concatenar(total, cadena1, cadena2));
        printf("\nLa vuelta a la concatenacion es: %s", vuelta(cadena1));
        // Le damos opcion al usuario si desea continuar el programa.
        printf("\nQuieres continuar concatenando? Presione <s> para continuar: ");
        scanf("%c", &n);
        system("cls"); // Usamos esta funcion para evitar que el terminal se inunde de dialogos.
    } while(n == 's' || n == 'S');
    /* Esta funcion quedo obsoleta en el estandar C99 y en algunos compiladores fue eliminada por el estandar C11 debido a que tiene un comportamiento indefinido a 
    menos que la entrada de datos sea la esperada (ocasionando problemas dificiles de encontrar).*/
    printf("Programa finalizado");
    return 0; // Fin del programa
}
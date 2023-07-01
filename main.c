#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100] = "esto es una cadena"; // acaba en 0
    char cadena2[100] = "esto es una cadena\0";
    char cadena3[100] = { 'o', 'l', 'a', '\0' };

    for (int i = 0; i < 100; i++) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    cadena[3] = 'A';
    printf("%c\n", cadena[3]);

    printf("%s\n", cadena3);

    printf("Introduce una cadena\n");
    fgets(cadena3, sizeof(cadena3), stdin);

    printf("%s", cadena3);

    
}

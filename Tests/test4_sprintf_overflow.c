#include <stdio.h>

int main() {
    char buffer[30];
    int number = 123456789;
    char *text = "Numéro très long avec formatage";
    sprintf(buffer, "Résultat: %d - %s - Extra", number, text);  // OVERFLOW
    printf("Buffer: %s\n", buffer);
    return 0;
}


#include <stdio.h>

int main() {
    char buffer[50];
    printf("Entrez une longue ligne: ");
    // gets(buffer);  // Très dangereux
    fgets(buffer, sizeof(buffer), stdin);  // Version sécurisée
    printf("Buffer lu: %s", buffer);
    return 0;
}


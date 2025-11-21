#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    char *source = "Cette chaine est trop longue pour le buffer";
    strcpy(buffer, source);  // BUFFER OVERFLOW
    printf("Buffer: %s\n", buffer);
    return 0;
}


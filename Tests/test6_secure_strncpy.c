#include <stdio.h>
#include <string.h>

int main() {
    char buffer[20];
    char *source = "Cette chaine est trop longue";

    if (strlen(source) >= sizeof(buffer)) {
        printf("Source trop longue\n");
    }

    strncpy(buffer, source, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';
    printf("Buffer sécurisé: %s\n", buffer);
    return 0;
}


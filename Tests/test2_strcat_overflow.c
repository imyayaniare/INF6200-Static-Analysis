#include <stdio.h>
#include <string.h>

int main() {
    char buffer[20] = "Hello ";
    char *append = "World! This is a very long string";
    strcat(buffer, append);  // BUFFER OVERFLOW
    printf("Buffer: %s\n", buffer);
    return 0;
}


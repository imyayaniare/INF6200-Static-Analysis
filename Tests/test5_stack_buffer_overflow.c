#include <stdio.h>
#include <string.h>

int main() {
    char local_buffer[8];
    char *input = "AAAAAAAAAAAAAAAAAAAAAAAA";
    strcpy(local_buffer, input);  // OVERFLOW
    printf("Buffer: %s\n", local_buffer);
    return 0;
}


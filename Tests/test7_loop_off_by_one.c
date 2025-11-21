#include <stdio.h>

int main() {
    char buffer[10];
    for (int i = 0; i <= 10; i++) {  // <= cause overflow
        buffer[i] = 'A';
    }
    buffer[9] = '\0';
    printf("Buffer: %s\n", buffer);
    return 0;
}


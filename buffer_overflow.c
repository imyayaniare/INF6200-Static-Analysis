// Tests personnalisés pour la détection de buffer overflow

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Test 1: Buffer overflow classique avec strcpy
void test_strcpy_overflow() {
    printf("=== Test 1: strcpy buffer overflow ===\n");
    char buffer[10];
    char *source = "Cette chaine est trop longue pour le buffer";
    
    printf("Taille du buffer: %zu\n", sizeof(buffer));
    printf("Taille de la source: %zu\n", strlen(source));
    
    // VULNÉRABLE: strcpy ne vérifie pas la taille
    strcpy(buffer, source);  // BUFFER OVERFLOW ICI
    
    printf("Buffer après strcpy: %s\n", buffer);
}

// Test 2: Buffer overflow avec strcat
void test_strcat_overflow() {
    printf("\n=== Test 2: strcat buffer overflow ===\n");
    char buffer[20] = "Hello ";
    char *append = "World! This is a very long string";
    
    printf("Buffer initial: '%s' (longueur: %zu)\n", buffer, strlen(buffer));
    printf("Chaîne à ajouter: '%s' (longueur: %zu)\n", append, strlen(append));
    
    // VULNÉRABLE: strcat ne vérifie pas la taille totale
    strcat(buffer, append);  // BUFFER OVERFLOW ICI
    
    printf("Buffer après strcat: %s\n", buffer);
}

// Test 3: Buffer overflow avec gets (très dangereux)
void test_gets_overflow() {
    printf("\n=== Test 3: gets buffer overflow ===\n");
    char buffer[50];
    
    printf("Entrez du texte (tapez une très longue ligne pour tester): ");
    
    // VULNÉRABLE: gets ne limite jamais la taille
    // gets(buffer);  // COMMENTÉ car trop dangereux même pour un test
    
    printf("Alternative sécurisée avec fgets:\n");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("Buffer lu: %s", buffer);
    }
}

// Test 4: Buffer overflow avec sprintf
void test_sprintf_overflow() {
    printf("\n=== Test 4: sprintf buffer overflow ===\n");
    char buffer[30];
    int number = 123456789;
    char *text = "Numéro très long avec formatage";
    
    printf("Formatage: nombre=%d, texte='%s'\n", number, text);
    
    // VULNÉRABLE: sprintf ne vérifie pas la taille du buffer
    sprintf(buffer, "Résultat: %d - %s - Extra text", number, text);
    
    printf("Buffer après sprintf: %s\n", buffer);
}

// Test 5: Buffer overflow sur la pile avec tableau local
void test_stack_overflow() {
    printf("\n=== Test 5: Stack buffer overflow ===\n");
    char local_buffer[8];
    char *dangerous_input = "AAAAAAAAAAAAAAAAAAAAAAAA";  // 24 A's
    
    printf("Buffer local de taille: %zu\n", sizeof(local_buffer));
    printf("Input de taille: %zu\n", strlen(dangerous_input));
    
    // VULNÉRABLE: écrasement de la pile
    strcpy(local_buffer, dangerous_input);
    
    printf("Buffer après overflow: %s\n", local_buffer);
}

// Test 6: Version sécurisée avec vérifications
void test_secure_version() {
    printf("\n=== Test 6: Version sécurisée ===\n");
    char buffer[20];
    char *source = "Cette chaine est trop longue";
    
    printf("Version sécurisée avec strncpy:\n");
    
    // SÉCURISÉ: utilisation de strncpy avec vérification
    if (strlen(source) >= sizeof(buffer)) {
        printf("ATTENTION: Source trop longue (%zu >= %zu)\n", 
               strlen(source), sizeof(buffer));
    }
    
    strncpy(buffer, source, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';  // Assurer la terminaison
    
    printf("Buffer sécurisé: %s\n", buffer);
}

// Test 7: Overflow avec boucle (off-by-one)
void test_loop_overflow() {
    printf("\n=== Test 7: Loop off-by-one overflow ===\n");
    char buffer[10];
    
    // VULNÉRABLE: boucle avec condition incorrecte
    for (int i = 0; i <= 10; i++) {  // <= au lieu de <
        buffer[i] = 'A';
    }
    
    printf("Buffer après boucle: ");
    for (int i = 0; i < 10; i++) {
        printf("%c", buffer[i]);
    }
    printf("\n");
}

// Fonction principale pour exécuter tous les tests
int main() {
    printf("=== TESTS DE BUFFER OVERFLOW ===\n");
    
    // Exécuter les tests un par un
    test_strcpy_overflow();
    test_strcat_overflow();
    test_gets_overflow();
    test_sprintf_overflow();
    test_stack_overflow();
    test_secure_version();
    test_loop_overflow();
    
    printf("\n=== FIN DES TESTS ===\n");
    return 0;
}

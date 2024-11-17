#include <stdio.h>

// Globale Variable
static int i5;

int main() {
    // Lokale Variablen
    int i1, i2, i3;
    
    // Adresse der lokalen Variablen anzeigen
    printf("Adresse von i1: %p und Speicher %lu\n", &i1, sizeof(&i1));
    printf("Adresse von i2: %p und Speicher %lu\n", &i2, sizeof(&i2));
    printf("Adresse von i3: %p und Speicher %lu\n", &i3, sizeof(&i3));
    
    // Statische Variable i4
    static int i4;
    printf("Adresse von i4: %p und Speicher %lu\n", &i4, sizeof(&i4));
    
    // Adresse der globalen Variable i5
    printf("Adresse von i5: %p und Speicher %lu\n", &i5, sizeof(&i5));
    
    
    int *i6 = NULL;

    // Ausgabe der Zeigeradresse
    printf("I6: %p\n",&i6);
    printf("I6: %p",i6); 
    
    return 0;
}

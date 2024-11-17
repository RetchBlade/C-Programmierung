#include <stdio.h>

// Funktion ohne static
void zaehlenOhneStatic() {
    int variable = 0; // Normale lokale Variable
    variable++;       // Inkrementieren
    printf("Wert der Variablen ohne static: %d\n", variable);
}

// Funktion mit static
void zaehlenMitStatic() {
    static int variable = 0; // Statische lokale Variable
    variable++;              // Inkrementieren
    printf("Wert der Variablen mit static: %d\n", variable);
}

int main() {
    // Demonstration ohne static
    printf("Ohne static:\n");
    zaehlenOhneStatic();
    zaehlenOhneStatic();
    zaehlenOhneStatic();

    // Demonstration mit static
    printf("\nMit static:\n");
    zaehlenMitStatic();
    zaehlenMitStatic();
    zaehlenMitStatic();

    return 0;
}

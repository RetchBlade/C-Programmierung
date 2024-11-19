#include <stdio.h>

int main() {
    // Experiment mit int
    int var = 42;
    int *pvar = &var;

    printf("Experiment mit 'int':\n");
    printf("Adresse von var: %p\n", (void *)&var);
    printf("Adresse von pvar vor Erhöhung: %p\n", (void *)pvar);

    pvar++; // Zeiger um 1 erhöhen
    long int diff = (long int)((char *)pvar - (char *)&var); // Differenz berechnen in Bytes
    printf("Adresse von pvar nach Erhöhung: %p\n", (void *)pvar);
    printf("Differenz in Bytes: %ld\n\n", diff);

    // Experiment mit long double
    long double lvar = 42.0;
    long double *plvar = &lvar;

    printf("Experiment mit 'long double':\n");
    printf("Adresse von lvar: %p\n", (void *)&lvar);
    printf("Adresse von plvar vor Erhöhung: %p\n", (void *)plvar);

    plvar++; // Zeiger um 1 erhöhen
    diff = (long int)((char *)plvar - (char *)&lvar); // Differenz berechnen in Bytes
    printf("Adresse von plvar nach Erhöhung: %p\n", (void *)plvar);
    printf("Differenz in Bytes: %ld\n\n", diff);

    // Experiment mit char
    char cvar = 'A';
    char *pcvar = &cvar;

    printf("Experiment mit 'char':\n");
    printf("Adresse von cvar: %p\n", (void *)&cvar);
    printf("Adresse von pcvar vor Erhöhung: %p\n", (void *)pcvar);

    pcvar++; // Zeiger um 1 erhöhen
    diff = (long int)((char *)pcvar - (char *)&cvar); // Differenz berechnen in Bytes
    printf("Adresse von pcvar nach Erhöhung: %p\n", (void *)pcvar);
    printf("Differenz in Bytes: %ld\n", diff);

    return 0;
}

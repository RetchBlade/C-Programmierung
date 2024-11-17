#include <stdio.h>

int main() {
    // Deklaration und Definition der Variablen (hier float)
    float x, y, result;

    // Initialisierung der Variablen
    x = 5.0;  // Wert für x
    y = 10.0; // Wert für y

    // Berechnung des Produkts
    result = x * y;

    // Ausgabe des Produkts
    printf("Das Produkt von %.2f und %.2f ist %.2f\n", x, y, result);

    // Berechnung des Quotienten
    result = x / y;

    // Ausgabe des Quotienten
    printf("Der Quotient von %.2f und %.2f ist %.2f\n", x, y, result);

    return 0;
}

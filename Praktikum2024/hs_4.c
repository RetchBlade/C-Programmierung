#include <stdio.h>

int main() {
    // Deklaration der Variablen (hier float)
    float x, y, result;
    int scan_result;

    // Benutzer zur Eingabe der Zahlen auffordern
    printf("Bitte geben Sie die erste Zahl ein: ");
    scan_result = scanf("%f", &x);
    if (scan_result != 1) {
        printf("Ungültige Eingabe für die erste Zahl. Bitte geben Sie eine gültige Zahl ein.\n");
        return 1;  // Programm beenden, wenn die Eingabe fehlerhaft ist
    }

    printf("Bitte geben Sie die zweite Zahl ein: ");
    scan_result = scanf("%f", &y);
    if (scan_result != 1) {
        printf("Ungültige Eingabe für die zweite Zahl. Bitte geben Sie eine gültige Zahl ein.\n");
        return 1;  // Programm beenden, wenn die Eingabe fehlerhaft ist
    }

    // Berechnung des Produkts
    result = x * y;

    // Ausgabe des Produkts
    printf("Das Produkt von %.2f und %.2f ist %.2f\n", x, y, result);

    return 0;
}

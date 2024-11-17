#include <stdio.h>

int main(void) {
    // Variablen deklarieren
    double startkapital, zinssatz, zinsen, kapital;
    int jahre;

    // Benutzeraufforderung zur Eingabe
    printf("Geben Sie das Startkapital ein (in Euro): ");
    scanf("%lf", &startkapital);

    printf("Geben Sie den jaehrlichen Zinssatz ein (in Prozent): ");
    scanf("%lf", &zinssatz);

    printf("Geben Sie die Anzahl der Jahre ein: ");
    scanf("%d", &jahre);

    // Ausgabe des Tabellenkopfs
    printf("\nJahr\tZinsen\t\tKapital\n");
    printf("-------------------------------\n");

    kapital = startkapital;

    // Schleife zur Berechnung der Zinsen und des Kapitals
    for (int jahr = 1; jahr <= jahre; jahr++) {
        zinsen = kapital * (zinssatz / 100); // Zinsen berechnen
        kapital += zinsen;                  // Kapital aktualisieren

        // Tabellenzeile ausgeben
        printf("%d\t%.2f\t\t%.2f\n", jahr, zinsen, kapital);
    }

    return 0;
}
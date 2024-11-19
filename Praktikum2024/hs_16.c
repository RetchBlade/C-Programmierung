#include <stdio.h>

#pragma pack(1)

// Struktur mit Geo, Messwert und Array fTemperatur
typedef struct {
    int Geo;
    float Messwert;
    float fTemperatur[5];  // Array von 5 Floats
} hs_16;

// Funktion zur Anzeige der Strukturwerte
void ausgabe(hs_16 messung) {
    printf("Geo: %d\n", messung.Geo);
    printf("Messwert: %.2f\n", messung.Messwert);

    // Anzeige des Arrays fTemperatur
    printf("fTemperatur Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", messung.fTemperatur[i]);
    }
    printf("\n");

    // Anzeige des Speicherbedarfs des Arrays fTemperatur
    printf("Speicherbedarf des fTemperatur Arrays: %zu\n", sizeof(messung.fTemperatur));

    // Verändern eines Array-Elements
    messung.fTemperatur[2] = 99.9f;  // Ändere das 3. Element
    printf("fTemperatur[2] nach Änderung: %.2f\n", messung.fTemperatur[2]);
}

// Funktion zur Rückgabe einer Struktur
hs_16 set_mw(int geo, float messwert) {
    hs_16 neueMessung;
    neueMessung.Geo = geo;
    neueMessung.Messwert = messwert;

    // Initialisierung des Arrays fTemperatur mit beliebigen Werten
    for (int i = 0; i < 5; i++) {
        neueMessung.fTemperatur[i] = (float)(i * 10);
    }

    // Rückgabe der Struktur
    return neueMessung;
}

int main() {
    // Initialisierung einer Struktur mit der Funktion set_mw
    hs_16 messung = set_mw(10, 25.5);

    // Aufruf der Funktion ausgabe mit der zurückgegebenen Struktur
    ausgabe(messung);

    // Anzeige des Wertes des veränderten Array-Elements nach dem Funktionsaufruf
    printf("Wert von fTemperatur[2] in main: %.2f\n", messung.fTemperatur[2]);

    return 0;
}

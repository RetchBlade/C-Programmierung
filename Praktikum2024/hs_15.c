#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Vergleichsfunktion für aufsteigende Reihenfolge
int vergleich_aufsteigend(int a, int b) {
    return a - b; // Wenn a < b, gibt es eine negative Zahl zurück
}

// Vergleichsfunktion für absteigende Reihenfolge
int vergleich_absteigend(int a, int b) {
    return b - a; // Wenn a > b, gibt es eine negative Zahl zurück
}

// Bubble Sort Funktion
void bubble(int *arr, int n, int (*vergleich)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vergleich(arr[j], arr[j + 1]) > 0) {  // Nutzung des Funktionszeigers
                // Tausch der Elemente, wenn sie in der falschen Reihenfolge sind
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hauptfunktion
int main() {
    int n = 10; // Größe des Arrays
    int arr[n];

    // Initialisierung des Zufallszahlengenerators
    srand(time(NULL));

    // Zufällige Zahlen im Array
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Zufallszahlen zwischen 0 und 99
    }
    
    printf("Unsortiertes Array:\t ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Funktionszeiger für die Vergleichsfunktion
    int (*vergleich_ptr)(int, int);

    // Wahl der Vergleichsfunktion (hier: aufsteigend)
    vergleich_ptr = vergleich_aufsteigend; // Funktionszeiger initialisieren

    // Aufruf der Bubble Sort Funktion mit Funktionszeiger
    bubble(arr, n, vergleich_ptr);

    // Ausgabe des sortierten Arrays
    printf("Sortiertes Array:\t ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

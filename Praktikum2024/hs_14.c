#include <stdio.h>

void ausgabe(int *a) {
    // Ermitteln der Größe des Übergabeparameters mit sizeof()
    printf("\nGröße des Übergabeparameters in der Funktion: %ld Bytes\n", sizeof(a));

    // Ausgabe der Array-Elemente
    printf("in der Funktion Array-Inhalt:\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    //  Arrays mit 10 Elementen
    int arr[10];
    
    //Test Array mit mehrElementen
    //int arr[20];
    
    // Größe des Arrays ermitteln und anzeigen
    printf("Größe des Arrays im Hauptprogramm: %ld Bytes\n", sizeof(arr));

    // Füllen des Arrays mit fortlaufenden Werten ab 1
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        arr[i] = i + 1;
    }
    
    printf("Array-Inhalt:\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Array an die Funktion übergeben
    ausgabe(arr);

    return 0;
}

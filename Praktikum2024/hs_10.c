#include <stdio.h>

void tausche(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int x = 10; 
    int y = 20; 

    printf("Vor dem Tauschen: x = %d, y = %d\n", x, y);

    // Funktion aufrufen und die Adressen der Variablen übergeben
    tausche(&x, &y);

    // Ergebnisse nach dem Tauschen anzeigen
    printf("Nach dem Tauschen: x = %d, y = %d\n", x, y);

    return 0;
}

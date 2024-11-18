#include <stdio.h>

int main() {
    int array[3][3][3];  /
    int *ptr = &array[0][0][0]; 
    int value = 1;  

    // Mit einer for-Schleife die Werte über den Zeiger zuweisen
    for (int i = 0; i < 27; i++) {
        *(ptr + i) = value++;
    }

    // Ausgabe der Array-Elemente mit geschachtelten Schleifen
    printf("Array-Elemente:\n");
    for (int i = 0; i < 3; i++) { 1
        printf("Ebene %d:\n", i + 1);
        for (int j = 0; j < 3; j++) { 
            for (int k = 0; k < 3; k++) { 
                printf("%3d ", array[i][j][k]);  
            }
            printf("\n");  
        }
        printf("\n"); 
    }

    return 0;
}

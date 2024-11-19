#include <stdio.h>
#include <stdlib.h>

int main() {
   
    double *array = (double *)malloc(10000 * sizeof(double));

  
    if (array == NULL) {
        printf("Speicher konnte nicht reserviert werden.\n");
        return 1;
    } else {
        printf("Speicher erfolgreich reserviert.\n");
    }

   
    for (int i = 0; i < 10000; i++) {
        array[i] = i * 1.1;  
    }

    
    int index = 5000;
    if (index >= 0 && index < 10000) {
        double value = *(array + index); 
        printf("Wert bei Index %d: %.2f\n", index, value);
    } else {
        printf("Ungültiger Index.\n");
    }

    // Speicher wieder freigeben
    free(array);

    return 0;
}

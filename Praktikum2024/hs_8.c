#include <stdio.h>

int main() {
    // Deklaration der Zeigervariablen
    char *a;
    float *b;
    double *c;
    long double *d;
    int *e;

    // Ausgabe des Speicherbedarfs der Zeigervariablen
    printf("a (Zeiger auf char): %lu Bytes\n", sizeof(a));
    printf("b (Zeiger auf float): %lu Bytes\n", sizeof(b));
    printf("c (Zeiger auf double): %lu Bytes\n", sizeof(c));
    printf("d (Zeiger auf long double): %lu Bytes\n", sizeof(d));
    printf("e (Zeiger auf int): %lu Bytes\n", sizeof(e));

    return 0;
}

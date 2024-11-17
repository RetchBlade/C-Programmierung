#include <stdio.h>

int main() {
    // Speicherbedarf ermitteln
    printf("char: %2zu Byte(s)\n", sizeof(char));
    printf("int: %2zu Byte(s)\n", sizeof(int));
    printf("long: %2zu Byte(s)\n", sizeof(long));
    printf("float: %2zu Byte(s)\n", sizeof(float));
    printf("double: %2zu Byte(s)\n", sizeof(double));


    return 0;
}

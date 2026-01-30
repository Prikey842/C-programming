#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    printf("int a = %d, size = %zu bytes\n", a, sizeof(a));
    printf("float b = %.2f, size = %zu bytes\n", b, sizeof(b));
    printf("char c = %c, size = %zu bytes\n", c, sizeof(c));
    return 0;
}
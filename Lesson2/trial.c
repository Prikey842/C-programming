#include <stdio.h>
int main() {
    int a = 15;
    float b = 45.92;
    char c = 'B';
    printf("int a = %d, size = %zu bytes\n", a, sizeof(a));
    printf("float b = %2.f, size = %zu bytes\n", b, sizeof(b));
    printf("char = %c, size = %zu bytes\n", c, sizeof(c));
    
    int marks = 98;
    printf("I had %d in differential equations\n", marks) ;
    return 0;


}
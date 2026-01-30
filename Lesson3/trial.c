#include <stdio.h>
int main(void) {
    char name[50];
    int age;
    float CGPA;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("What is your age: ");
    scanf("%d", &age);
    printf("What is your CGPA: ");
    scanf("%f", &CGPA);
    printf("Name: %s\n", name);
    printf("I am %d years old\n", age);
    printf("I had %.2f in the 1st semester", CGPA);


    return 0;
}
#include <stdio.h>

int main(void) {
    printf("Celsius to Fahrenheit\n");   // Heading

    int c;
    for (c = 0; c <= 100; c = c + 10) {
        printf("%3d %6.1f\n", c, (c * 9.0/5.0) + 32);  // Table row
    }

    return 0;
}

/*Exercise 1-4

Write a program to print the 
corresponding Celsius to Fahrenheit table.*/
#include <stdio.h>

int main(void) {
    printf("Fahrenheit to Celsius\n");   // Heading

    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));  // Table row
    }

    return 0;
}

/*Exercise 1-3

Modify the temperature conversion program to print a heading 
above the table.*/
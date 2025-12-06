#include <stdio.h>

int main(void) {
    int c;

    // getchar() != EOF is either 0 or 1
    while ((c = getchar()) != EOF) {
        printf("%d\n", (c != EOF));  // Print the expression's value
    }

    return 0;
}
/*Exercise 1-6

Verify that the expression getchar() != EOF is 0 or 1*/
#include <stdio.h>

int main(void) {
    int c, last = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (last != ' ')   // print only one blank
                putchar(' ');
        } else {
            putchar(c);
        }
        last = c;
    }

    return 0;
}

/*Exercise 1-9

Write a program to copy its input to its output,
 replacing each string of one or more blanks by a single blank.*/
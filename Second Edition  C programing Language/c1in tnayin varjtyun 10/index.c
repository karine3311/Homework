#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");      // show tab
        else if (c == '\b')
            printf("\\b");      // show backspace
        else if (c == '\\')
            printf("\\\\");     // show backslash
        else
            putchar(c);         // normal char
    }

    return 0;
}

/*Exercise 1-10

Write a program to copy its input to its output, replacing each tab by \t, each backspace by
 \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.*/
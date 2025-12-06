#include <stdio.h>

int main(void) {
    int c, blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')  blanks++;      // count blanks
        if (c == '\t') tabs++;        // count tabs
        if (c == '\n') newlines++;    // count newlines
    }

    printf("blanks=%d tabs=%d newlines=%d\n", blanks, tabs, newlines);
    return 0;
}

/*Exercise 1-8

Write a program to count blanks, tabs, and newlines.*/
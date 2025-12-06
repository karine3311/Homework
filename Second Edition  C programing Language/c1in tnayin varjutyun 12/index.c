#include <stdio.h>

int main(void) {
    int c, inword = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (inword) {
                putchar('\n');   // finish the word
                inword = 0;
            }
        } else {
            putchar(c);         // print character of a word
            inword = 1;
        }
    }

    return 0;
}

/*Exercise 1-12

Write a program that prints its input one word per line.*/
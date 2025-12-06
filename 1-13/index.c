/*Exercise 1-13

Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/
#include <stdio.h>

#define MAXWORD 20   // max length we track

int main(void) {
    int c, len = 0;
    int counts[MAXWORD] = {0};  // histogram buckets

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (len > 0) {
                if (len < MAXWORD)
                    counts[len]++;     // count this word length
                len = 0;
            }
        } else {
            len++;                     // inside a word
        }
    }

    // last word if input doesn't end with newline
    if (len > 0 && len < MAXWORD)
        counts[len]++;

    // print histogram
    for (int i = 1; i < MAXWORD; i++) {
        if (counts[i] > 0) {
            printf("%2d: ", i);
            for (int j = 0; j < counts[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }

    return 0;
}

/*Exercise 1-13

Write a program to print a histogram of the lengths of words in its input. It is 
easy to draw the histogram with the bars horizontal; a vertical orientation is 
more challenging.*/
#include <stdio.h>   // allows us to use printf()

// this small program tests what happens when the string
int main(void) {
    printf("Here is an undefined escape: \c\n");
    // Usually the backslash is ignored and the program prints just:  c

    return 0;   
}

/*Exercise 1-2

Experiment to find out what happens when printf’s argument string contains \c, 
where c is some character not listed above.*/
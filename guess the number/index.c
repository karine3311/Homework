#include <stdio.h>
#include <stdlib.h>

int main() {
    int secret, guess;

    // pick a random number (0–99)
    secret = rand() % 100;

    printf("Guess the number (0-99): ");

    // keep guessing until correct
    while (1) {
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct!\n");
            break;
        }

        if (guess < secret) {
            printf("Too small, try again: ");
        } else {
            printf("Too big, try again: ");
        }
    }

    return 0;
}

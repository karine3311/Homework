#include <stdio.h>

// This function reverses a string "s" in place.
void reverse(char s[]) {
    int i = 0;
    int j = 0;

    // Find the end of the string
    while (s[j] != '\0') {
        j++;
    }
    j--;  // move back from '\0' to last character

    // Swap characters from both ends moving inward
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char line[1000];

    // Read input one line at a time
    while (fgets(line, sizeof(line), stdin) != NULL) {
        reverse(line);   // reverse the whole line
        printf("%s", line);  // print it back out
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    char s[50];

    scanf("%d", &n);      // read an integer
    sprintf(s, "%d", n);  // convert int → string

    printf("%s\n", s);

    return 0;
}

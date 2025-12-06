#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);  // how many rows

    for (int i = 1; i <= n; i++) {      // each row
        for (int j = 1; j <= i; j++) {  // print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");  // next line
    }

    return 0;
}

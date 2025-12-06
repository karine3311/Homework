#include <stdio.h>

// simple function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;

    scanf("%d", &n);

    // try all pairs (i, n-i)
    for (int i = 2; i <= n/2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            return 0;
        }
    }

    // if no pair found
    printf("Not possible\n");

    return 0;
}

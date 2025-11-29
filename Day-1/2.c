// Count the prime numbers between 1 and n

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("Total prime numbers = %d\n", count);

    return 0;
}

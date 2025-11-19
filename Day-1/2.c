// prime number range 
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
   for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            count++;
        }
    }

    printf("Total prime numbers from 1 to %d = %d", n, count);

    return 0;
}

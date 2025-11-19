// prime number

#include <stdio.h>
int main() {
    int n, prime = 0,count=0;

    printf("Enter the value: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("It is not prime");
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 1;
                break;
            }
        }

        if (prime == 1) {
            printf("It is not prime");
        } else {
            printf("It is prime");
        }
    }

    return 0;
}

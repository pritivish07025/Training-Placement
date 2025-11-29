// find the digital root 
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum, rem;

    while (n > 9) {
        sum = 0;   // reset sum

        while (n != 0) {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }

        n = sum;
    }

    printf("Digital Root = %d\n", n);

    return 0;
}

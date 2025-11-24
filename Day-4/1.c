
/*
Problem Statement : check whether the number are anagrams number or not ?

 number angrams: anagram wo numbers hote hai jinke digits and frequency bhi same hoi

*/ 
#include <stdio.h>

int main() {
    int n, m;

    printf("Enter first number: ");
    scanf("%d", &n);

    printf("Enter second number: ");
    scanf("%d", &m);

    int freq[10] = {0};   
    while (n != 0) {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
    while (m != 0) {
        int digit = m % 10;
        freq[digit]--;
        m /= 10;
    }
    int isAnagram = 1;
    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Numbers are Anagrams \n");
    else
        printf("Numbers are NOT Anagrams \n");

    return 0;
}

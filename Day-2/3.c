
#include <stdio.h>

// Function declaration
int compareString(char s1[], char s2[]);

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = compareString(str1, str2);

    if (result == 0)
        printf("Both strings are equal\n");
    else if (result == 1)
        printf("First string is greater\n");
    else
        printf("Second string is greater\n");

    return 0;
}

// Function definition
int compareString(char s1[], char s2[]) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            if (s1[i] > s2[i])
                return 1;
            else
                return -1;
        }
        i++;
    }

    // If both strings end together
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;

    // If first ends before second
    if (s1[i] == '\0')
        return -1;

    // If second ends before first
    return 1;
}

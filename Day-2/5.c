#include <stdio.h>
int main() {
    char *ptr = "hello";

    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++;
    }

    return 0;
}

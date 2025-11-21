// Count number of consonents in a given string
// No predefined string functions used

#include <stdio.h>

int main() {
    int size;
    int count = 0;

    printf("Enter the size of the string: ");
    scanf("%d", &size);
    getchar();   
    char str[size];
    printf("Enter the string: ");
    fgets(str, size, stdin);
    printf("You entered: %s", str);
    for(int i = 0; str[i] != '\0'; i++) {

        char ch = str[i]; 
        for( char ch='A';ch<='Z';ch++){

        if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' ||ch=='U' ||
           ch=='a'||ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            continue ;
            count++;
        }
        
        }
    }

    printf("\nNumber of consonent = %d", count);

    return 0;
}

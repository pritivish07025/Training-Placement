// check polindrom for characters
#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the string: ");
    scanf("%d", &size);
    getchar();   
    char str[size];
    printf("Enter  the  first string: ");
    fgets(str, size, stdin);
    printf("\n first string is :%s ",str);
    for(int i=0;str[i]!='\0';i++){
        for(int j='\0';j>=0;j--){
            if(str[i]==str[j]){
                printf("string is polindrom");
                return 0;
            }
        }
    }
    return 0;
}
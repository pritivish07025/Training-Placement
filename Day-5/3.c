// armstrong number 
#include <stdio.h>
int main(){
    int n ;
    int temp =0;
    int original =n;
    printf("enter a number \n");
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
     temp=temp+(rem*rem*rem);
        n=n/10;
    }
    if(temp==original){
        printf("number is armstrong");
    }
    return 0;
}
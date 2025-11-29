// check nuumber is polindrom or not 

#include <stdio.h>
int main(){
    //polindrom : ye wo number hota hai jinka reverse karne fir se same aaye toh
    int n;
    int rem , temp =0;
    printf("enter n number :\n");
    scanf("%d",&n);
    while(n!=0){
    rem =n%10;
    temp =temp*10+rem;
    n=n/10;
    }
    if(temp==n){
        printf("this is the polindrom ");
    }
    else {
        printf("this is not the polindrom");
    }
    return 0;
}
// factorial of the number with re recursion

#include <stdio.h>
int fact(int n){
    int fact =1;
    if(n==0){
        return 1;
    }
    for(int i=1;i<=1;i++){
        fact =fact*i;
        
    }
    printf("factorial of the number is :",fact);
}
int main(){
   int num;
   printf("enter num:\n");
   scanf("%d",&num);
   fact(num);
   return 0;
}
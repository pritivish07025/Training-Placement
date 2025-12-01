//factorial of the number without recursion

#include <stdio.h>
int main(){
int n;
printf("enter  number:\n");
scanf("%d",&n);
int fact=1;
if(n==0){
    printf("factorial is :");
    return 1;
}
for(int i=1;i<=n;i++){
    fact=fact*i;  
}
printf("factorial :%d",fact);
return 0;
}
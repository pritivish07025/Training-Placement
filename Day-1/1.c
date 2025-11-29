//check whether a number is prime or not

#include <stdio.h>
#include <stdbool.h>
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
bool isPrime=true;
for(int i=2;i<=n-1;i++){
if(n%i==0){
isPrime=false;
break;
}
}
if(isPrime==true){
printf("prime number");
}
else{
printf("not prime");
}

return 0;
}
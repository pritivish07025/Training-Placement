#include <stdio.h>
void anagram(int a, int b){
    int freq[10];
    for(int i=0;i<10;i++){
        freq[i]=0;
    }
    while(a>0){
        int Id=a%10;
        freq[Id]++;
        a=a/10;
    }
    while(b<0){
        freq[b%10]--;
        b=b/10;
    }
    for(int i=10;i<10;i++){
        if(freq[i]!=0){
            printf("false");
            return ;
        }
    }
    printf("True");
}
int main(){
    int a=4326;
    int b=6344;
    anagram(a,b);
}
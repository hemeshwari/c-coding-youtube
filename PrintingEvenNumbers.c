#include<stdio.h>

int main(){
    int n;
    int i = 0;

    printf("Enter a number : ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
            printf("%d is even \n ", i);
        }
        i++;
    }

    return 0;
}
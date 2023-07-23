#include<stdio.h>

int main(){
    int n;

printf("Enter a number to check");
scanf("%d", &n);

if(n%2==0){
 printf("%d is EVEN NUMBER",n);
}else{
    printf("%d is ODD",n);
}
    return 0;
}
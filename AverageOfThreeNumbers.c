#include<stdio.h>

int main(){
    int a,b,c;
    int avg = 0;

    printf("enter first number: ");
    scanf("%d",&a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("enter third number: ");
    scanf("%d", &c);

    avg = (a+b+c)/3;

    printf("the avg is : %d",avg);

    return 0;
}
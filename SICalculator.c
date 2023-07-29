#include<stdio.h>
#include<conio.h>
int main(){
    int p,r,t;

    printf("Enter principal: ");
    scanf("%d",&p);

    printf("Enter Rate : ");
    scanf("%d", &r);

    printf("Enter Time : ");
    scanf("%d",&t);

    printf("YOUR SI IS : %d",p*r*t/100);

    return 0;
}
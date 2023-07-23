#include<stdio.h>

int main(){
    int a ,b ,c;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    printf("Enter third Number: ");
    scanf("%d",&c);
    printf("a=%d, b=%d, c=%d\n" , a,b,c);
    if(a>=b&&a>=c){
        printf("Greatest number is a %d",a);
    }else if(b>=a&&b>=c){
        printf("Greatest Number is b %d",b);
    }else{
        printf("Greatest Number is c %d", c);
    }
    return 0;
}
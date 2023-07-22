#include<stdio.h>

int main(){
    int a= 5;
    int b = 3;

    printf("a = %d\n", a);
    printf ("b = %d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

printf("Swapped Value Is: ");
printf("a=%d,b=%d",a,b);

    return 0 ;
}
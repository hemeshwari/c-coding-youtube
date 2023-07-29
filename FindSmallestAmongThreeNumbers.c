#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter First Number:\n");
    scanf("%d", &a);
    printf("Enter Second Number: \n");
    scanf("%d", &b);
    printf("Enter Third Number:\n");
    scanf("%d", &c);
    printf("Numbers are: a=%d b=%d c=%d\n", a, b, c);
    if (a <= b && a <= c){
        printf("Smallest number is a = %d", a);
    }
    else if (b <= a && b <= c){
        printf("smallest number is b = %d", b);
    }
    else{
        printf("smallest number is c = %d", c);
    }
    return 0;
}
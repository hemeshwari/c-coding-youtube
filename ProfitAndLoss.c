#include<stdio.h>

int main(){
    int sellingPrice, costPrice, profit , loss;

    printf("Enter Selling Price: ");
    scanf("%d", &sellingPrice);

    printf("Enter Cost Price : ");
    scanf("%d", &costPrice);

    if(sellingPrice>costPrice){
        profit = sellingPrice-costPrice;
        printf("Congratulations! you got profit of %d rupees", profit);
    }else{
        loss = costPrice-sellingPrice;
        printf("OOps! you got loss of %d rupees",loss);
    }

    return 0;
}
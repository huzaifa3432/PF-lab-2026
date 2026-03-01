#include<stdio.h>
int main(void){
    int bill = 0,price,input;
    do{
        printf("\nEnter the price of the product: ");
        scanf("%d",&price);
        bill+=price;
        printf("\nDo you want to add another product? (1 or 0): ");
        scanf("%d",&input);
        if(input != 1 || input != 0){
            printf("Invalid Input! Try again");
            printf("\nDo you want to add another product? (1 or 0): ");
            scanf("%d",&input);
        }
    }while(input != 0);
    if(bill > 5000){
        printf("\nThe total bill amount after a 5%% discount is: %.2f",bill*(0.95));
    }else{
        printf("\nThe total Bill amount is: %d",bill);
    }

    return 0;
}

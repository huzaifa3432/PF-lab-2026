#include<stdio.h>
int main(void){
    int card,pin,amount,balance=45000;
    printf("Enter your Card Number (10 digits): ");
    scanf("%d",&card);
    printf("\nEnter your Pin (5 digits): ");
    scanf("%d",&pin);
    while(balance > 0){
        printf("\nEnter the amount of cash you want to withdraw: ");
        scanf("%d", &amount);
        if(balance >= amount){
            balance -=amount;
            printf("\nWithdrawal Successful\nNew Balance = %d",balance);
        }else{
            printf("\nInsufficient amount! Try Again.");
        }
    }

    return 0;
}

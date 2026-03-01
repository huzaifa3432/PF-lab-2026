#include<stdio.h>
int main(void){
    int pass;
    do{
        printf("\nEnter the correct password (6 digits): ");
        scanf("%d",&pass);
        if(pass == 342159){
            printf("\nThe password is correct!");
            break;
        }else{
            printf("\nThe password is incorrect, try again!");
        }
    }
    while(pass != 342159);
}

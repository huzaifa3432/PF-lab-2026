#include<stdio.h>
int main(void){
    int i, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i = 1; i <= num; i++){
        sum +=i;
    }
    printf("\nThe Sum of the first %d natural numbers is: %d",num,sum);

    return 0;
}

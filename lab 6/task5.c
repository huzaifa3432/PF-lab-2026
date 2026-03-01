#include<stdio.h>
int main(void){
    int temp = 0;
    printf("Enter current Temperature (Celsius): ");
    scanf("%d",&temp);
    while(temp != -999){
        printf("\nCurrent Temperature = %d C\nWaiting for new input: ", temp);
        scanf("%d",&temp);
    }

    return 0;
}

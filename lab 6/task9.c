#include<stdio.h>
int main(void){
    int i,box,deco = 0;
    printf("Enter the number of boxes: ");
    scanf("%d",&box);
    for(i=1;i<=box;i++){
        deco+=i;
    }
    printf("Total Decorative Items = %d", deco);

    return 0;
}
